#!/bin/bash

cdir=$(pwd)

function thisdir()
{
        SOURCE="${BASH_SOURCE[0]}"
        while [ -h "$SOURCE" ]; do # resolve $SOURCE until the file is no longer a symlink
          DIR="$( cd -P "$( dirname "$SOURCE" )" >/dev/null 2>&1 && pwd )"
          SOURCE="$(readlink "$SOURCE")"
          [[ $SOURCE != /* ]] && SOURCE="$DIR/$SOURCE" # if $SOURCE was a relative symlink, we need to resolve it relative to the path where the symlink file was located
        done
        DIR="$( cd -P "$( dirname "$SOURCE" )" >/dev/null 2>&1 && pwd )"
        echo ${DIR}
}
THISD=$(thisdir)
source ${THISD}/util.sh
separator "${BASH_SOURCE}"

build_dir=${THISD}/build
src_dir=${THISD}/src

cleanup=$(get_opt "cleanup" $@)
if [ "x${cleanup}" == "xyes" ]; then
	note "Cleaning all (including sources)..."
	rm -rf ${src_dir}
	rm -rf ${build_dir}
	exit 0
fi

clean=$(get_opt "clean" $@)
if [ "x${clean}" == "xyes" ]; then
	note "Cleaning..."
	rm -rf ${build_dir}
	exit 0
fi

build=$(get_opt "build" $@)
if [ "x${build}" == "xyes" ]; then
	if [ ! -d ${src_dir} ]; then
		note "Setup sources..."
		aliphysics_dir=$(get_opt "aliphysics" $@)
		red_tree_sources_dir="<none>"
		if [ -z ${aliphysics_dir} ]; then
			red_tree_sources_dir=${THISD}/../AliPhysics/PWGDQ/reducedTree/
		else
			red_tree_sources_dir=${aliphysics_dir}/PWGDQ/reducedTree/
		fi
		if [ ! -d ${red_tree_sources_dir} ]; then
			error "Reduced Tree sources dir ${red_tree_sources_dir} does not exist."
			exit 1
		else
			note "Copying/rsync files..."
			rsync -avh --progress ${red_tree_sources_dir} ${src_dir}
		fi
	fi

	if [ ! -d ${src_dir} ]; then
		error "sources missing..."
	else
		note "Building..."
		mkdir ${build_dir}
		cd ${build_dir}
		cmake .. && make
	fi
	exit 0
fi

note "options are: --build --clean --cleanup [--aliphysics=<dir>]"
note "by default we are looking for aliphysics in <this script dir>/.. "
