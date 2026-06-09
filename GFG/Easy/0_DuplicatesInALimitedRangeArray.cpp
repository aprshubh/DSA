/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int> output;
        for(int i = 0 ;i<arr.size();i++){
            int idx = abs(arr[i]) -1;
            
            if(arr[idx]<0) output.push_back(idx+1);
            else arr[idx]*=-1;
        }return output;
    }
};
