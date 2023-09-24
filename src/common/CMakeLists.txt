
add_library(common 
            sample.cpp
            Game.cpp)


target_link_libraries(common utils core runtime)

target_include_directories(common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
