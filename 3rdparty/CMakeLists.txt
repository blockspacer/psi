cmake_minimum_required(VERSION 3.1.0)

if( USE_WEBENGINE )
    include(qhttp.cmake)
endif()
include(qite/libqite/libqite.cmake)
list(APPEND HEADERS ${qite_HEADERS})
list(APPEND PLAIN_SOURCES ${qite_SOURCES})
