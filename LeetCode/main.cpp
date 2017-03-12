//
//  main.cpp
//  LeetCode
//
//  Created by Yi-Ling Wu on 12/03/2017.
//  Copyright © 2017 YILING. All rights reserved.
//

#include <iostream>
#include "1_two_sum.hpp"

int main(int argc, const char * argv[]) {

    // Test_1: TwoSum
    TwoSum *twosum = new TwoSum;
    std::vector<int> nums = {3,2,4};
    int target = 6;
    std::vector<int> result = twosum->twoSum(nums, target);
    return 0;
    
}
