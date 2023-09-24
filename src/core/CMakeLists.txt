add_library(core 
            sample.cpp
            GameController.cpp
            Graphics.cpp)


target_link_libraries(core utils common)

target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})