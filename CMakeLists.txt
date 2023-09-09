# CMakeのバージョンを指定
cmake_minimum_required(VERSION 3.0)

# C++のバージョンを指定
set(CMAKE_CXX_STANDARD 20)

# プロジェクト名を指定
project(develop)

# mainディレクトリのmain.cppをビルド対象に追加
add_executable(exec main/main.cpp)

# objectディレクトリ内のsample.cppをビルド対象に追加
add_library(object_orientation_sample OBJECT main/object/object_orientation_sample.cpp)

# インクルードディレクトリを設定
target_include_directories(object_orientation_sample PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/object)

# メインプログラムとライブラリをリンク
target_link_libraries(exec object_orientation_sample)


# buildディレクトリ配下のexecファイルで実行できる
# ./exec
