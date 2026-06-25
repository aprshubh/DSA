/**
 * Problem Link : https://leetcode.com/problems/find-the-difference-of-two-arrays/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> st1, st2;
        for(int x : nums1) st1.insert(x);
        for(int x : nums2) st2.insert(x);
        vector<int>ans1, ans2 ;
        for(int x :st1) {
            if(!st2.count(x))ans1.push_back(x);
        }
        for(int x :st2) {
            if(!st1.count(x))ans2.push_back(x);
        }return {ans1,ans2};
    }
};
