add_executable(atlas_demo
    main.cpp
)

target_link_libraries(atlas_demo
    PRIVATE
        atlas_common
)