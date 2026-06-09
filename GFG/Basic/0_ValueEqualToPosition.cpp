/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> valEqualToPos(vector<int>& arr) {
        
        vector<int> ans;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]==i+1) ans.push_back(arr[i]);
        }return ans;
        
    }
};
