/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-array-using-stack--143151/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int>& arr) {
        // code here
        stack<int> st;
        for(int x : arr) st.push(x);
        int index =0;
        while(!st.empty()){
            arr[index]=st.top();
            st.pop();
            index++;
        }
    }
};
