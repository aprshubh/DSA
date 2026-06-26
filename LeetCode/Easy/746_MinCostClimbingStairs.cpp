/**
 * Problem Link : https://leetcode.com/problems/min-cost-climbing-stairs/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   int minCost(vector<int> & cost,int n,vector<int>&dp){
    if(n==1||n==0) return cost[n];
    if(dp[n]!=-1) return dp[n];
    return dp[n]=cost[n]+min(minCost(cost,n-1,dp),minCost(cost,n-2,dp));
   }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size()-1;
        vector<int> dp(n+1,-1);
        return min(minCost(cost,n,dp),minCost(cost,n-1,dp));
        
    }
};
