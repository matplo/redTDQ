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
source=$(get_opt "source" $@)
if [ "x${build}" == "xyes" ]; then
	if [ ! -d ${src_dir} ] || [ "x${source}" == "xyes" ]; then
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
		aliroot_dir=$(get_opt "aliroot" $@)
		aliroot_source_dir="<none>"
		if [ -z ${aliroot_dir} ]; then
			aliroot_source_dir=${THISD}/../AliRoot/
		else
			aliroot_source_dir=${aliroot_dir}
		fi
		if [ ! -d ${aliroot_source_dir} ]; then
			error "AliRoot sources dir ${aliroot_source_dir} does not exist."
			exit 1
		else
			note "Copying/rsync files..."
			aliroot_deps=$(cat ${THISD}/aliroot_deps.txt)
			for fn in ${aliroot_deps}
			do
				[ ! -e "${THISD}/miniAliROOT/${fn}.h" ] 	&& rsync ${aliroot_source_dir}/${fn}.h 	${THISD}/miniAliROOT
				[ ! -e "${THISD}/miniAliROOT/${fn}.cxx" ] && rsync ${aliroot_source_dir}/${fn}.cxx 	${THISD}/miniAliROOT
			done
		fi
	fi

	if [ ! -d ${src_dir} ]; then
		error "sources missing..."
	else
		note "Building..."
		[ ! -d ${build_dir} ] && mkdir ${build_dir}
		cd ${build_dir}
		cmake .. && make -j 
	fi
	exit 0
fi

note "options are: --build --clean --cleanup [--aliphysics=<dir>] [--aliroot=<dir>]"
note "by default we are looking for AliPhysics in <this script dir>/.. "
note "by default we are looking for AliRoot in <this script dir>/.. "
