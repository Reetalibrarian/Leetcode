//
//  main.cpp
//  LeetCode
//
//  Created by Yi-Ling Wu on 12/03/2017.
//  Copyright © 2017 YILING. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include "1_two_sum.hpp"
#include "43_Multiply_Strings.hpp"
#include "0_Fibonacci.hpp"

int main(int argc, const char * argv[]) {

    // Test_1: TwoSum
    /*TwoSum *twosum = new TwoSum;
    std::vector<int> nums = {3,2,4};
    int target = 6;
    std::vector<int> result = twosum->twoSum(nums, target);
    return 0;
     */

    // Teset_2:
    /*
    MultiplyStrings *mutiplyString = new MultiplyStrings;
    std::string num1 = "29292999";
    std::string num2 = "329393939";
    std::string result = mutiplyString->multiply(num1, num2);
    return 0;
     */

    // Test_0: Fibonacci
    int n = 10;
    long result = Fibonacci::FibonacciSeries(n);
    return 0;
}
