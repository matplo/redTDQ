#Analysis stuff 
file(GLOB miniAliROOT_SOURCES_LIB ${CMAKE_CURRENT_SOURCE_DIR}/*.cxx)
string(REPLACE ".cxx" ".h" miniAliROOT_HEADERS_LIB "${miniAliROOT_SOURCES_LIB}")
set(miniAliROOT_LINKDEFFILE ${CMAKE_CURRENT_SOURCE_DIR}/miniAliROOTLinkDef.h)
ROOT_GENERATE_DICTIONARY(G__miniAliROOT ${miniAliROOT_HEADERS_LIB} LINKDEF ${miniAliROOT_LINKDEFFILE})
add_library(miniAliROOT SHARED ${miniAliROOT_SOURCES_LIB} G__miniAliROOT.cxx)
target_link_libraries(miniAliROOT ${ROOT_LIBRARIES})
