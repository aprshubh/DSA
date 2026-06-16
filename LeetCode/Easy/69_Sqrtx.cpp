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

        int left = 1, right = x, mid;
        if (x == 0)
            return 0;
        if (x < 3)
            return 1;
        while (left <= right) {
            mid = left + ((right - left) >> 1);

            if (mid == (x / mid))
                return mid;
            else if ((mid) < (x / mid))
                left = mid + 1;
            else
                right = mid - 1;
        }
        return right;
    }
};
