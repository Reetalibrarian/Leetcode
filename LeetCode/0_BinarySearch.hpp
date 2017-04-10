//
//  0_BinarySearch.hpp
//  LeetCode
//
//  Created by Yi-Ling Wu on 06/04/2017.
//  Copyright © 2017 YILING. All rights reserved.
//

#ifndef __BinarySearch_hpp
#define __BinarySearch_hpp

#include <stdio.h>

class BinarySearch {
public:
    static int BinarySearchIterative(int *array, int length, int num);
    static int BinaarySearchDeviceAndConquer(int *array, int num, int left, int right);
};

#endif /* __BinarySearch_hpp */
