/**
 * Problem Link : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        unordered_set<int> st(nums.begin(),nums.end());
        vector<int> ans;
        for(int i = 1; i<=nums.size();i++){
            if(!st.count(i)) ans.push_back(i);
        }return ans;

        
    }
};
