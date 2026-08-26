/**
 * Problem Link : https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x : nums) mp[x]++;
        int sum=0;
        for(auto[key,val]:mp){
            if(val%k==0) sum+=key*val;
        }return sum;
        
    }
};
