/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/friendly-array2009/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int calculateFriendliness(vector<int>& arr) {
        // code here
        int ans=abs(arr.back() - arr[0]);
        for(int i = 0;i<arr.size()-1;i++){
            ans+= abs(arr[i+1]-arr[i]);
            
        }return ans;
    }
};

