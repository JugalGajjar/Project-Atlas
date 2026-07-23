add_library(atlas_common
    src/hello.cpp
)

target_include_directories(atlas_common
    PUBLIC
        include
)

target_compile_features(atlas_common
    PUBLIC
        cxx_std_20
)