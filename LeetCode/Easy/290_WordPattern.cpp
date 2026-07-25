/**
 * Problem Link : https://leetcode.com/problems/word-pattern/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> mp;
        unordered_set<string> st;

        int k = 0;

        int start = 0;
        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                if (mp.count(pattern[k])) {
                    if (mp[pattern[k]] != s.substr(start, i - start))
                        return false;
                } else {
                    if (st.count(s.substr(start, i - start)))
                        return false;
                    else {
                        mp[pattern[k]] = s.substr(start, i - start);
                        st.insert(s.substr(start, i - start));
                    }
                }
                k++;
                start = i + 1;
            }
        }
        return true;
    }
};
