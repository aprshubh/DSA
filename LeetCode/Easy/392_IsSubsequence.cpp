/**
 * Problem Link : https://leetcode.com/problems/is-subsequence/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0;
        int k = 0;
        while (i < s.size() && k < t.size()) {
            if(s[i]==t[k]) i++;
            k++;

        }return i ==s.size();
    }
};
