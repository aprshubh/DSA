/**
 * Problem Link : https://leetcode.com/problems/broken-calculator/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int count = 0;
        while (target > startValue) {
            if (target % 2 != 0)
                target++;
            else
                target /= 2;
            count++;
        }
        if (target < startValue)
            count += abs(target - startValue);

        return count;
    }
};
