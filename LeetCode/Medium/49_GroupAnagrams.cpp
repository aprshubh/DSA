/**
 * Problem Link : https://leetcode.com/problems/group-anagrams/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string x : strs) {
            string temp = x;
            sort(x.begin(), x.end());
            mp[x].push_back(temp);
        }
        vector<vector<string>> ans;
        for (auto [key, value] : mp) {
            ans.push_back(value);
        }
        return ans;
    }
};
