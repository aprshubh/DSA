/**
 * Problem Link : https://leetcode.com/problems/unique-number-of-occurrences/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> mp;
        for (int x : arr)
            mp[x]++;
        unordered_set<int> st;
        for (auto [key, value] : mp) {
            if (st.count(value))
                return false;
            st.insert(value);
        }
        return true;
    }
};
