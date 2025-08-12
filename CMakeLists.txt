cmake_minimum_required(VERSION 3.10)

project(raytracer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-omit-frame-pointer")

set(PROJECT_SOURCES
    vec3.h
    color.h
    ray.h
    sphere.h
    camera.h
    hittable.h
    hittable_list.h
    math.h
    interval.h
    material.h
    timer.h
)

add_executable(raytracer
    main.cpp
    ${PROJECT_SOURCES}
)
