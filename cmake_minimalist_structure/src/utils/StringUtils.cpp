#include <vector>
#include <sstream>
#include <iostream>
#include <iterator>
#include <algorithm>
#include "StringUtils.hpp"

std::string stringutils::replace(const std::string &input, const std::string &target, const std::string &replacement) {
    std::vector<std::string> data;
    std::size_t lastIndex = 0;
    std::size_t index = 0;

    while ((index = input.find(target, lastIndex)) != input.npos) {
        data.push_back(input.substr(lastIndex, index - lastIndex));
        data.push_back(replacement);
        lastIndex = index + target.size();
    }

    if (lastIndex < input.size()) {
        data.push_back(input.substr(lastIndex));
    }

    std::stringstream res;
    std::copy(data.begin(), data.end(), std::ostream_iterator<std::string>(res));
    return res.str();
}