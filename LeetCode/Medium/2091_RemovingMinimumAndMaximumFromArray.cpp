/**
 * Problem Link : https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = max_element(nums.begin(), nums.end()) - nums.begin();
        int mini = min_element(nums.begin(), nums.end()) - nums.begin();

        if (mini > maxi)
            swap(mini, maxi);

        int n = nums.size();

        int ans = min({
            maxi + 1,             
            n - mini,              
            mini + 1 + n - maxi    
        });

        return ans;
    }
};
