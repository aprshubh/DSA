/**
 * Problem Link : https://leetcode.com/problems/longest-palindromic-substring/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void expand(string &s, int left, int right, int &start, int &maxlength) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            int length = right - left + 1;

            if (length > maxlength) {
                maxlength = length;
                start = left;
            }

            left--;
            right++;
        }
    }

    string longestPalindrome(string s) {

        if (s.size() < 2)
            return s;

        int start = 0;
        int maxlength = 1;

        for (int i = 0; i < s.size(); i++) {
            expand(s, i, i, start, maxlength);     
            expand(s, i, i + 1, start, maxlength); 
        }

        return s.substr(start, maxlength);
    }
};
