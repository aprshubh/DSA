/**
 * Problem Link : https://leetcode.com/problems/uncommon-words-from-two-sentences/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

        unordered_map<string, int> mp;

        int start = 0;
        for (int i = 0; i <= s1.size(); i++) {
            if (i == s1.size() || s1[i] == ' ') {
                mp[s1.substr(start, i - start)]++;
                start = i + 1;
            }
        }

        start = 0;

        for (int i = 0; i <= s2.size(); i++) {
            if (i == s2.size() || s2[i] == ' ') {
                mp[s2.substr(start, i - start)]++;
                start = i + 1;
            }
        }

        vector<string> ans;

        for (auto [key, value] : mp) {
            if (value == 1)
                ans.push_back(key);
        }

        return ans;
    }
};
