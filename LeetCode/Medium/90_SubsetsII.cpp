/**
 * Problem Link : https://leetcode.com/problems/subsets-ii/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans = {{}};
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        for (int x : nums) {
            int n = ans.size();
            for(int i = 0;i<n;i++){
                vector<int> temp = ans[i];
                temp.push_back(x);
                if(!st.count(temp)) ans.push_back(temp);
                st.insert(temp);
            }
        }return ans;
    }
};
