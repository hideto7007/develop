add_library(utils 
            sample.cpp)


target_include_directories(utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


# Eigen
find_package(Eigen3 3.4 REQUIRED NO_MODULE)
target_include_directories(utils PUBLIC ${EIGEN3_INCLUDE_DIRS})
target_link_libraries(utils Eigen3::Eigen)


# json
find_package(nlohmann_json 3.10.5 REQUIRED NO_MODULE)
target_include_directories(utils PUBLIC ${NLOHMANN_JSON_INCLUDE_DIRS})
target_link_libraries(utils nlohmann_json::nlohmann_json)