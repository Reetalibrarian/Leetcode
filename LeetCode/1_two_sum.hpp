//
//  1_two_sum.hpp
//  LeetCode
//
//  Created by Yi-Ling Wu on 12/03/2017.
//  Copyright © 2017 YILING. All rights reserved.
//

// Question: Given an array of integers, return indices of the two numbers such that they add up to a specific target. \
    You may assume that each input would have exactly one solution, and you may not use the same element twice. \

/*Example:
 Given nums = [2, 7, 11, 15], target = 9,

 Because nums[0] + nums[1] = 2 + 7 = 9,
 return [0, 1]. */

#ifndef __two_sum_hpp
#define __two_sum_hpp

#include <stdio.h>
#include <vector>

class TwoSum {
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target);
};


#endif /* __two_sum_hpp */
