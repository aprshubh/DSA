/**
 * Problem Link : https://leetcode.com/problems/shuffle-string/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        for (int i = 0; i < s.size(); i++) {
            while (indices[i] != i) {
                swap(s[i], s[indices[i]]);
                swap(indices[i], indices[indices[i]]);
            }
        }
        return s;
    }
};
