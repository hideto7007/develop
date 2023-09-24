#include <vector>
#include <algorithm>
#include <iostream>
#include <random>
#include <array>
#include <string>
#include <memory>
#include <variant>
#define NDEBUG

#include "/src/common/Game.h"

int main() {

    std::shared_ptr<Sample> sample = std::make_shared<Sample>();
    sample->sample("hoge");

    return 0;
}