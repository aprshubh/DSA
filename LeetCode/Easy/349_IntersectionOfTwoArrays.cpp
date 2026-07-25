/**
 * Problem Link : https://leetcode.com/problems/intersection-of-two-arrays/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> st(nums1.begin(),nums1.end());
        unordered_set<int> ans;
        for(int x : nums2){
            if(st.count(x)) ans.insert(x);
        }return vector<int>{ans.begin(),ans.end()};

        
    }
};
