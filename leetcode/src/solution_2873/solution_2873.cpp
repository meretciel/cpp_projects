//
// Created by ryan on 11/4/23.
//

// Problem Link: https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-i/

#include "solution_2873.h"
#include <iostream>
#include <vector>

namespace solution_2873 {
    using namespace std;
    class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            int largest_number = 0;
            int second_largest_number = 0;
            int min_number = 10e6 + 1;
            for (const auto& v : nums) {
                min_number = min(min_number, v);

                if (v > largest_number) {
                    largest_number = v;
                } else if (v >= second_largest_number) {
                    second_largest_number =v;
                }

                cout << "v=" << v << ", " << largest_number << ", " << second_largest_number << ", " << min_number << "\n";

            }
            long case_1 = (largest_number - min_number) * second_largest_number;
            long case_2 = (second_largest_number - min_number) * largest_number;

            return max(case_1, case_2);
        }
    };

    void run() {
        auto sol = Solution{};
        vector<int> input = {1, 10, 3, 4, 19};
        auto res = sol.maximumTripletValue(input);
        cout << res << "\n";
    }
}

