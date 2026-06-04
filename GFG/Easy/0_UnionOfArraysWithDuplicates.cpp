/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {

        unordered_set<int> st(a.begin(), a.end());
        
        
        st.insert(b.begin(), b.end());
        

        return vector<int>(st.begin(), st.end());
    }
};
