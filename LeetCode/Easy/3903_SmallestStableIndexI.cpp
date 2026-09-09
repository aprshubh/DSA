/**
 * Problem Link : https://leetcode.com/problems/smallest-stable-index-i/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n);
        int ans =INT_MAX;
        int mini=nums[n-1];
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            temp[i]=mini;
        }
        int maxi=nums[0];
        int key= -1;
        for( int i =0;i<n;i++){
            maxi=max(maxi,nums[i]);
            int dif =abs(maxi-temp[i]);
            if(dif<INT_MAX && dif<=k) {
                ans=dif;
                key=i;}

        }return key;
        
        
    }
};
