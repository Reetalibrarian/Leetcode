//
//  0_BinarySearch.cpp
//  LeetCode
//
//  Created by Yi-Ling Wu on 06/04/2017.
//  Copyright © 2017 YILING. All rights reserved.
//

#include "0_BinarySearch.hpp"

int BinarySearch::BinarySearchIterative(int *array, int length, int num) {
    int left = 0, right = length - 1;
    while (left <= right) {
        int middle = (left + right) / 2;
        if (array[middle] == num) {
            return middle;
        }

        if (array[middle] > num) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }
    return -1;
}

int BinarySearch::BinaarySearchDeviceAndConquer(int *array, int num, int left, int right) {
    if (left > right) return -1;
    int middle = (left + right) / 2;

    if (array[middle] == num) return middle;

    if (array[middle] > num)
        return BinarySearch::BinaarySearchDeviceAndConquer(array, num, left, middle - 1);
    else
        return BinarySearch::BinaarySearchDeviceAndConquer(array, num, middle + 1, right);
    return 0;
}
