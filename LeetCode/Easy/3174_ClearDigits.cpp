/**
 * Problem Link : https://leetcode.com/problems/clear-digits/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {

        stack<char> st;
        for (char x : s) {
            if (isalpha(x))
                st.push(x);
            else {
                if (!st.empty())
                    st.pop();
            }
        }
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
