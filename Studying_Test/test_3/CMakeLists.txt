cmake_minimum_required (VERSION 3.0)
 
project (cmake_for_protobuf)

#Find required protobuf package
include(FindProtobuf)
FIND_PACKAGE(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIR})
