//
//  1_two_sum.cpp
//  LeetCode
//
//  Created by Yi-Ling Wu on 12/03/2017.
//  Copyright © 2017 YILING. All rights reserved.
//

#include "iostream"
#include "1_two_sum.hpp"
#include <unordered_map>

std::vector<int> TwoSum::twoSum(std::vector<int> &nums, int target) {
    std::unordered_map<int, int> hash;
    std::vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        if (hash.find(target - nums[i]) != hash.end()) {
            result.push_back(hash[target - nums[i]]);
            result.push_back(i);
            std::cout << i << std::endl;
            std::cout << result[i] << std::endl;
            return result;
        }

        hash[nums[i]] = i;
        std::cout << hash[i] << std::endl;
    }

    // 无解的情况
    result.push_back(-1);
    result.push_back(-1);
    return result;
}
