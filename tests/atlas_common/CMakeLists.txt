add_executable(atlas_common_tests
    hello_test.cpp
)

target_link_libraries(atlas_common_tests
    PRIVATE
        atlas_common
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(atlas_common_tests
    PROPERTIES
        LABELS "unit"
)