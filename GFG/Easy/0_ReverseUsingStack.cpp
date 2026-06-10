/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string reverse(const string& S) {
        // code here
        std::stack<char> st;
        for(char x : S) st.push(x);
        string output ="";
        while(!st.empty()){
            output+=st.top();
            st.pop();
        }return output;
        
    }
};
