/**
 * Problem Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int mini = INT_MAX;
        int maxi = 0;
        for( int x : prices){
            mini = min( mini  ,x);
            maxi = max(maxi,x-mini);
        }return maxi;

        
    }
};
