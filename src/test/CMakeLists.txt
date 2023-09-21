add_library(test 
            sample.cpp)

add_executable(test_exec ./main.cpp)  # ターゲット名をtest_execに変更

target_include_directories(test_exec PUBLIC ./)
target_link_libraries(test_exec utils common core runtime)  # runtimeをリンク