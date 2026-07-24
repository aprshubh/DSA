/**
 * Problem Link : https://leetcode.com/problems/majority-element/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int dig = nums[0];
        int count = 0;
        for (int x : nums) {
            if (count > 0) {
                if (x == dig)
                    count++;
                else
                    count--;
            } else {
                dig = x;
                count++;
            }
        }
        return dig;
    }
};
