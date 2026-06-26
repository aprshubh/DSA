/**
 * Problem Link : https://leetcode.com/problems/sqrtx/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {

        if (x <= 1)
            return x;

        int left = 1, right = x;

        while (left <= right) {
            int mid = left + ((right - left) >> 1);

            if (mid <= x / mid)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return right;
    }
};
