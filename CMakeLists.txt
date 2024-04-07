cmake_minimum_required(VERSION 3.25)
project(CSAPP_Labs C)

set(CMAKE_C_STANDARD 11)

include_directories(datalab/datalab-handout)
include_directories(malloclab/malloclab-handout)
include_directories(proxylab/proxylab-handout)
include_directories(proxylab/proxylab-handout/tiny)

add_executable(CSAPP_Labs
        bomblab/bomb/bomb.c
        datalab/datalab-handout/bits.c
        datalab/datalab-handout/bits.h
        datalab/datalab-handout/btest.c
        datalab/datalab-handout/btest.h
        datalab/datalab-handout/decl.c
        datalab/datalab-handout/fshow.c
        datalab/datalab-handout/ishow.c
        datalab/datalab-handout/tests.c
        malloclab/malloclab-handout/clock.c
        malloclab/malloclab-handout/clock.h
        malloclab/malloclab-handout/config.h
        malloclab/malloclab-handout/fcyc.c
        malloclab/malloclab-handout/fcyc.h
        malloclab/malloclab-handout/fsecs.c
        malloclab/malloclab-handout/fsecs.h
        malloclab/malloclab-handout/ftimer.c
        malloclab/malloclab-handout/ftimer.h
        malloclab/malloclab-handout/mdriver.c
        malloclab/malloclab-handout/memlib.c
        malloclab/malloclab-handout/memlib.h
        malloclab/malloclab-handout/mm.c
        malloclab/malloclab-handout/mm.h
        proxylab/proxylab-handout/tiny/cgi-bin/adder.c
        proxylab/proxylab-handout/tiny/csapp.c
        proxylab/proxylab-handout/tiny/csapp.h
        proxylab/proxylab-handout/tiny/tiny.c
        proxylab/proxylab-handout/csapp.c
        proxylab/proxylab-handout/csapp.h
        proxylab/proxylab-handout/proxy.c
        proxylab/target1/farm.c
        shelllab/shlab-handout/myint.c
        shelllab/shlab-handout/myspin.c
        shelllab/shlab-handout/mysplit.c
        shelllab/shlab-handout/mystop.c
        shelllab/shlab-handout/tsh.c)
