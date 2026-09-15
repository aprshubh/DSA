/**
 * Problem Link : https://leetcode.com/problems/minimum-string-length-after-removing-substrings/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for (char x : s) {
            if (!st.empty() && ((x == 'B' && st.top() == 'A') ||
                                (x == 'D' && st.top() == 'C')))
                st.pop();
            else
                st.push(x);
        }
        return st.size();
    }
};
