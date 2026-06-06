/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/pattern-of-strings3829/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
  public:
    vector<string> pattern(string& s) {
        vector<string> ans;

        while(!s.empty()) {
            ans.push_back(s);
            s.pop_back();
        }

        return ans;
    }
};
