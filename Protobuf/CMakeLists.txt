cmake_minimum_required(VERSION 3.6)
project(src)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

INCLUDE(FindProtobuf)
FIND_PACKAGE(Protobuf REQUIRED)
INCLUDE_DIRECTORIES(${PROTOBUF_INCLUDE_DIR})

set(SOURCES
    addressbook.pb.cc
    addressbook.pb.h)

set(APP_SOURCES
proto_read.cpp
proto_write.cpp
)

foreach( sourcefile ${APP_SOURCES} )
    # Simple string replace, to cut off .cpp.
    string( REPLACE ".cpp" "" name ${sourcefile} )
    add_executable( ${name} ${sourcefile} ${SOURCES} )
    target_link_libraries (${name} LINK_PUBLIC ${PROTOBUF_LIBRARY})
endforeach( sourcefile ${APP_SOURCES} )
