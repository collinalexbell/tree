cmake_minimum_required(VERSION 3.10)

project(Tree)

find_package(Catch2 REQUIRED)
add_executable(tests test.cpp)
target_link_libraries(tests Catch2::Catch2)

include(Catch)

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git GIT_TAG 67e12da316754ff3c6c91b50aafb2658438f3c1e) # the commit hash for 1.7.0
FetchContent_MakeAvailable(cpr)
add_executable(-tree- tree.cpp)
add_executable(meditate meditate.cpp)
add_executable(http http.cpp)
add_executable(kcc kcc.cpp)
add_executable(Treelon Treelon.cpp)
target_compile_features(kcc PRIVATE cxx_std_17)
target_link_libraries(http PRIVATE cpr::cpr)
