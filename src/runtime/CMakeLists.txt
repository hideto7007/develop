add_library(runtime 
            sample.cpp
            input.cpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../common)  
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../core) 

add_executable(runtime_exec ./main.cpp)  # ターゲット名をruntime_execに変更

target_link_libraries(runtime_exec utils common core)  # リンクするライブラリを指定
target_include_directories(runtime_exec PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
