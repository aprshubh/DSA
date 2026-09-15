/**
 * Problem Link : https://leetcode.com/problems/longest-valid-parentheses/
 * Platform     : LeetCode
 * Difficulty   : Hard
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int ans = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='(') st.push(i);
            else {
                st.pop();
                if(st.empty()) st.push(i);
            }ans=max(ans,i-st.top());
        }return ans;
        
    }
};
