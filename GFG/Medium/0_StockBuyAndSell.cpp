/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
        // code here
        int profit =0;
        
        for(int i = 0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1]) profit+=arr[i+1]-arr[i];
        }return profit;
    }
};
