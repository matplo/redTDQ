# CMakeLists.txt for event package. It creates a library with dictionary and a main program
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(redTDQ)

# You need to tell CMake where to find the ROOT installation. This can be done in a number of ways:
#   - ROOT built with classic configure/make use the provided $ROOTSYS/etc/cmake/FindROOT.cmake
#   - ROOT built with CMake. Add in CMAKE_PREFIX_PATH the installation prefix for ROOT
list(APPEND CMAKE_PREFIX_PATH $ENV{ROOTSYS} $ENV{ROOT_DIR})

#---Locate the ROOT package and defines a number of variables (e.g. ROOT_INCLUDE_DIRS)
# find_package(ROOT REQUIRED COMPONENTS RIO Net Eve EG)
find_package(ROOT REQUIRED COMPONENTS Core EG Gpad Graf Hist MathCore Matrix Minuit Net Physics RIO Tree)
#---Define useful ROOT functions and macros (e.g. ROOT_GENERATE_DICTIONARY)
include(${ROOT_USE_FILE})

file(GLOB KF_SOURCES_LIB ${CMAKE_CURRENT_SOURCE_DIR}/kf/*.cxx)
string(REPLACE ".cxx" ".h" KF_HEADERS_LIB "${KF_SOURCES_LIB}")
set(KF_LINKDEFFILE ${CMAKE_CURRENT_SOURCE_DIR}/kf/AliKFLinkDef.h)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/kf)
ROOT_GENERATE_DICTIONARY(G__AliKF ${KF_HEADERS_LIB} LINKDEF ${KF_LINKDEFFILE})
add_library(AliKF SHARED ${KF_SOURCES_LIB} G__AliKF.cxx)
target_link_libraries(AliKF ${ROOT_LIBRARIES})

file(GLOB SOURCES_LIB ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cxx)
#get_filename_component(to_remove ${CMAKE_CURRENT_SOURCE_DIR}/src/AliAnalysisTaskReducedEventProcessor.cxx ABSOLUTE)
#list(REMOVE_ITEM SOURCES_LIB "${to_remove}")
list(REMOVE_ITEM SOURCES_LIB 
	${CMAKE_CURRENT_SOURCE_DIR}/src/AliAnalysisTaskReducedEventProcessor.cxx
	${CMAKE_CURRENT_SOURCE_DIR}/src/AliAnalysisTaskReducedTreeMaker.cxx
	${CMAKE_CURRENT_SOURCE_DIR}/src/AliReducedEventInputHandler.cxx)
message(STATUS "SOURCES: ${SOURCES_LIB}")

string(REPLACE ".cxx" ".h" HEADERS_LIB "${SOURCES_LIB}")
set(LINKDEFFILE ${CMAKE_CURRENT_SOURCE_DIR}/src/PWGDQreducedTreeLinkDef.h)
list(REMOVE_ITEM ${HEADERS_LIB} ${CMAKE_CURRENT_SOURCE_DIR}/src/${LINKDEFFILE})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src ${CMAKE_CURRENT_SOURCE_DIR}/kf)
ROOT_GENERATE_DICTIONARY(G__DQReducedTrees ${HEADERS_LIB} LINKDEF ${LINKDEFFILE})

#---Create a shared library with geneated dictionary
add_library(DQReducedTrees SHARED ${SOURCES_LIB} G__DQReducedTrees.cxx)
message(STATUS "ROOT_LIBRARIES: ${ROOT_LIBRARIES}")
target_link_libraries(DQReducedTrees ${ROOT_LIBRARIES} AliKF)

# #---Create  a main program using the library
# add_executable(Main MainEvent.cxx)
# target_link_libraries(Main Event)
