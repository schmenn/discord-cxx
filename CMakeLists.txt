cmake_minimum_required(VERSION 3.17)
project(discord-cxx)

set(CMAKE_CXX_STANDARD 20)

# Dependencies.
find_package(cpprestsdk REQUIRED)

# Setup sources.
file(
    GLOB_RECURSE SOURCES
    "include/${PROJECT_NAME}/*.h"
    "src/*.cpp"
    "src/*.h"
)

add_library("${PROJECT_NAME}" ${SOURCES})

target_include_directories(
    "${PROJECT_NAME}" PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

# Link dependencies.
target_link_libraries(
    "${PROJECT_NAME}" PRIVATE
    cpprestsdk::cpprest
)

# Setup install targets.
install(
    TARGETS "${PROJECT_NAME}"
    EXPORT ${PROJECT_NAME}-config LIBRARY
    DESTINATION ${CMAKE_INSTALL_LIBDIR} # Destination is relative to ${CMAKE_INSTALL_PREFIX}.
)

install(
    EXPORT ${PROJECT_NAME}-config
    NAMESPACE ${PROJECT_NAME}::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

install(
    DIRECTORY include/${PROJECT_NAME}/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}
    FILES_MATCHING PATTERN "*.h" PATTERN "LICENSE" # Match only header files & LICENSE file.
)

# Support for CLion install target.
add_custom_target(
    "install_${PROJECT_NAME}"
    "${CMAKE_COMMAND}" --build "${CMAKE_BINARY_DIR}" --target install
    DEPENDS "${PROJECT_NAME}"
    COMMENT "Installing ${PROJECT_NAME}"
)
