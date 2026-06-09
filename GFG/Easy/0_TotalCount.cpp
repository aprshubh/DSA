/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/total-count2415/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        
        
        int total =0;
        for(int x : arr){
            total+=(x+k-1)/k;
        }return total;
    
    }
};
