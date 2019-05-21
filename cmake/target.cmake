file(GLOB_RECURSE cli_sources ${CMAKE_SOURCE_DIR}/src/cli/*.cpp)
file(GLOB_RECURSE cli_header ${CMAKE_SOURCE_DIR}/src/cli/*.h)

file(GLOB_RECURSE lib_sources ${CMAKE_SOURCE_DIR}/src/lib/*.cpp)
file(GLOB_RECURSE lib_header ${CMAKE_SOURCE_DIR}/src/lib/*.h)

message(STATUS Client Sources: ${cli_sources})
message(STATUS Library Sources: ${lib_sources})
message(STATUS Client Header: ${cli_header})
message(STATUS Library Header: ${lib_header})

add_library(synthesizer SHARED
    ${lib_sources}
)

add_library(synthesizer_static STATIC
    ${lib_sources}
)

add_executable(synthesizer-cli
    ${cli_sources}
)

target_link_libraries(synthesizer-cli
    synthesizer
)