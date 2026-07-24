/**
 * Problem Link : https://leetcode.com/problems/contains-duplicate/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;
        for(int x : nums){
            if(st.count(x)) return true;
            st.insert(x);
        }return false;
        
    }
};
