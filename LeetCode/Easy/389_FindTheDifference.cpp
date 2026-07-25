/**
 * Problem Link : https://leetcode.com/problems/find-the-difference/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;

        for (char c : s)
            ans ^= c;

        for (char c : t)
            ans ^= c;

        return ans;
    }
};
