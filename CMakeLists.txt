cmake_minimum_required(VERSION 3.10)

project(raytracer LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

set(PROJECT_SOURCES
    vec3.h
    color.h
    ray.h
    sphere.h
    hittable.h
    hittable_list.h
    math.h
)

add_executable(raytracer
    main.cpp
    ${PROJECT_SOURCES}
)
