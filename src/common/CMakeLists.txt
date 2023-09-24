
add_library(common 
            sample.cpp
            Game.cpp
            Enemy.cpp
            Bullet.cpp
            Obstacle.cpp
            Player.cpp
            )


target_link_libraries(common utils core runtime)

target_include_directories(common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
