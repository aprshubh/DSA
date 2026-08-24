/**
 * Problem Link : https://leetcode.com/problems/reverse-words-in-a-string/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int end = -1;

        for (int i = s.size() - 1; i >= 0; i--) {

            
            if (end == -1 && s[i] != ' ') {
                end = i + 1;        
            }

            
            else if (end != -1 && s[i] == ' ') {
                if (!ans.empty())
                    ans += ' ';

                ans += s.substr(i + 1, end - i - 1);
                end = -1;
            }
        }

        
        if (end != -1) {
            if (!ans.empty())
                ans += ' ';

            ans += s.substr(0, end);
        }

        return ans;
    }
};
