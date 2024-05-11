#include <exception>
#include <string_view>
#include <stdexcept>
#include <iostream>
#include "StringUtils.hpp"

const int FAILED = 1;
const int SUCCESS = 0;
#define ASSERT_TRUE(expr) if (!(expr)) {throw TestFailed();}
#define ASSERT_FALSE(expr) if ((expr)) {throw TestFailed();}

class TestFailed: public std::runtime_error {
public:
    TestFailed(): std::runtime_error("Test Failed") {};
};


void test1() {
    auto actual = stringutils::replace("Hello World", "World", "World!");
    ASSERT_TRUE(actual == "Hello World!")
}

int main(int argc, char* argv[]) {
    try {
        if (argc != 2) {
            throw std::invalid_argument("Missing the test name");
        }

        auto name = std::string_view(argv[1]);

        if (name == "test1") {test1();}
        else {throw std::invalid_argument("Unknown test name.");}

    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
        return 1;
    }
}
