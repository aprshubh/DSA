/**
 * Problem Link : https://leetcode.com/problems/find-the-highest-altitude/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0;
        int sum = 0;
        for(int x : gain) maxi=max(maxi,sum+=x);  
        return maxi;      
        
    }
};
