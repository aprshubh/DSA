/**
 * Problem Link : https://leetcode.com/problems/count-elements-with-maximum-frequency/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int ,int>mp;
        for(int x :nums) mp[x]++;
        int ans = 0;
        int fre = 0;
        for(auto[key,value]:mp){
            if(value>fre) {
                ans = value;
                fre=value;}
            else if(value==fre) ans+=value;

        }return ans;
    }
};
