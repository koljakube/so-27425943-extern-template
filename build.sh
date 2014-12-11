#!/bin/bash

clang++ -std=c++1y -stdlib=libc++ -fno-rtti -fno-exceptions -Iinclude -c src/Foo.cpp -o Foo.cpp.o
ar cr libfoo.a Foo.cpp.o
ranlib libfoo.a
clang++ -std=c++1y -stdlib=libc++ -fno-rtti -fno-exceptions -Iinclude -c test/FooTest.cpp -o FooTest.cpp.o
clang++ -std=c++1y -stdlib=libc++ -fno-rtti -fno-exceptions -fexceptions -Iinclude -L. FooTest.cpp.o -o FooTest libfoo.a
