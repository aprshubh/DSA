/**
 * Problem Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        std::unordered_set<char> set;
        set.reserve(s.size());
        int i = 0;
        int max = 0;
        for (int j = 0; j < s.size(); j++) {
            while (set.count(s[j]))
                set.erase(s[i++]);
            set.insert(s[j]);
            if (max < set.size())
                max = set.size();
        }
        return max;
    }
};

