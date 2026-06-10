/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int max =INT_MIN;
        int sum = 0;
        
        for(int x : arr){
            sum+=x;
            if(max<sum){
                max= sum;
            }if(x<0 && abs(sum-x)<abs(x)){
                sum=0;
            }
        }return max;
        
    }
};
