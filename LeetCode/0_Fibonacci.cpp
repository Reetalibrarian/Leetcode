//
//  0_ Fibonacci.cpp
//  LeetCode
//
//  Created by Yi-Ling Wu on 06/04/2017.
//  Copyright © 2017 YILING. All rights reserved.
//

#include "0_Fibonacci.hpp"
#include <iostream>

long Fibonacci::FibonacciSeries (int n) {
    long first = 0;
    long second = 1;
    long result = 0;

    for (int i = 2; i <= n; i++) {
        result = first + second;
        first = second;
        second = result;
        std::cout << result <<std::endl;
    }
    return result;
}

long Fibonacci::FibonacciDivideAndConquer(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return FibonacciDivideAndConquer(n-1) + FibonacciDivideAndConquer(n-2);
}
