# CMakeのバージョンを指定
cmake_minimum_required(VERSION 3.0)

# C++のバージョンを指定
set(CMAKE_CXX_STANDARD 20)

# プロジェクト名を指定
project(develop)

# mainディレクトリのmain.cppをビルド対象に追加
add_executable(exec main/main.cpp)

# objectディレクトリ内のsample.cppをビルド対象に追加
add_library(lib OBJECT 
            main/object/object_orientation_sample.cpp
            main/object/product.cpp
            main/object/iDCard.cpp
            main/object/IDCardFactory.cpp)

# インクルードディレクトリを設定
target_include_directories(lib PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/object
    )

# メインプログラムとライブラリをリンク
target_link_libraries(exec lib)


# buildディレクトリ配下のexecファイルで実行できる
# ./exec
