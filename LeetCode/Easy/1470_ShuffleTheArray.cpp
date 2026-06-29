/**
 * Problem Link : https://leetcode.com/problems/shuffle-the-array/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        int k = 0;

        for(int i = 0;i<n;i++){
            ans[k]=nums[i];
            k++;
            ans[k]=nums[n+i];
            k++;
        }return ans;
    }
};
