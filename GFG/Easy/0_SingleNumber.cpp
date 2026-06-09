/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/single-number1014/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int ans =arr[0];
        for(int i = 1;i<arr.size();i++){
            ans^=arr[i];
        }return ans;
    }
};
