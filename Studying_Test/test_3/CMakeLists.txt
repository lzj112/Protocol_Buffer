cmake_minimum_required (VERSION 3.0)
 project (cmake_for_protobuf)

#Find required protobuf package
FIND_PACKAGE(Protobuf REQUIRED)

set(PROTO_FILES proto/student.proto)
PROTOBUF_GENERATE_cpp(PROTO_SRCS PROTOHDRS ${PROTO_FILES})

include_directories(/usr/local/protobuf/include/)
link_directories(/usr/local/protobuf/lib/)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_definitions("-g -Wall -std=c++11")

add_executable(main
               ${PROJECT_SOURCE_DIR}/src/main.cpp 
               ${PROJECT_SOURCE_DIR}/src/person.cc 
               
               ${PROTO_SRCS}
               ${PROTO_HDRS})
target_link_libraries(main 
                      protobuf)


#${PROJECT_SOURCE_DIR}:
#   当前项目的顶级源目录
#
#find_package(Protobuf REQUIRED) 报错
# Could NOT find Protobuf (missing: Protobuf_INCLUDE_DIR) 
#因为只安装了protoc编译器，而不是libprotobuf
#
# sudo apt-get install  libprotobuf-dev protobuf-compiler

