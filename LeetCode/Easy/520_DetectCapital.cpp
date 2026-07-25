/**
 * Problem Link : https://leetcode.com/problems/detect-capital/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();

        if (isupper(word[0]) && isupper(word[n - 1])) {
            for (int i = 1; i < n - 1; i++) {
                if (!isupper(word[i])) return false;
            }
        }
        else if (islower(word[0]) && islower(word[n - 1])) {
            for (int i = 1; i < n - 1; i++) {
                if (!islower(word[i])) return false;
            }
        }
        else if (isupper(word[0]) && islower(word[n - 1])) {
            for (int i = 1; i < n - 1; i++) {
                if (!islower(word[i])) return false;
            }
        }
        else {
            return false;
        }

        return true;
    }
};
