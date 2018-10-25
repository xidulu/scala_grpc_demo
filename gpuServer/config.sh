#!/bin/bash

protoc -I protobuf --cpp_out=cpp protobuf/GpuNode.proto
protoc -I protobuf --grpc_out=cpp --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` protobuf/GpuNode.proto