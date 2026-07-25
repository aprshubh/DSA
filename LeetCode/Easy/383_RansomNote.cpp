/**
 * Problem Link : https://leetcode.com/problems/ransom-note/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};

        for (char c : magazine)
            freq[c - 'a']++;

        for (char c : ransomNote) {
            if (freq[c - 'a'] == 0)
                return false;

            freq[c - 'a']--;
        }

        return true;
    }
};
