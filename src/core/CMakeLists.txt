add_library(core 
            sample.cpp)


target_link_libraries(core utils common)

target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})