#include <iostream>
#include <string>
#include "StringUtils.hpp"

int main(int argc, char* argv[]) {
    std::string value = stringutils::replace("Hello ${name}", "${name}", "Toby");
    std::cout << value << std::endl;
}