/**
 * Problem Link : https://leetcode.com/problems/container-with-most-water/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size()-1;
        int ans = 0;
        while(left<right){
            int width = right-left;
            int dig=min(height[left],height[right]);
            ans=max(ans,dig*width);
            if(height[left]<height[right]) left++;
            else right--;
        }return ans;
        
    }
};
