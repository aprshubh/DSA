/**
 * Problem Link : https://leetcode.com/problems/valid-parentheses/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {

        stack<char> st;
        for (int x : s) {

            if (st.empty())
                st.push(x);
            else if ((x == ')' && st.top() == '(') ||
                     (x == '}' && st.top() == '{') ||
                     (x == ']' && st.top() == '['))
                st.pop();
            else
                st.push(x);
        }
        return st.empty();
    }
};
