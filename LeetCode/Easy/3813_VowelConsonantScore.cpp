/**
 * Problem Link : https://leetcode.com/problems/vowel-consonant-score/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0;
        int c = 0;
        for (char x : s) {
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
                v++;
            else if (x == ' ' || (x >= '0' && x <= '9'))
                continue;
            else
                c++;
        }
        return (c > 0) ? v / c : 0;
    }
};
