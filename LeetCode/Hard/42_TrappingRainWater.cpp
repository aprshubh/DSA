/**
 * Problem Link : https://leetcode.com/problems/trapping-rain-water/
 * Platform     : LeetCode
 * Difficulty   : Hard
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        
        int total=0;
        int left = 0;
        int right=height.size()-1;
        int lmax=0;
        int rmax=0;
        while(left<=right){
            if(height[left]<height[right]){
                lmax=max(lmax,height[left]);
                total+=lmax-height[left];
                left++;
            }else {
                rmax=max(rmax,height[right]);
                total+=rmax-height[right];
                right--;
            }
        }return total;
        
    }
};
