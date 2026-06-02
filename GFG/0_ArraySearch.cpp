/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int search(vector<int>& arr, int x) {
        for(int i = 0;i<arr.size();i++){
            if(arr[i]==x) return i;
        }return -1;
        
    }
};
