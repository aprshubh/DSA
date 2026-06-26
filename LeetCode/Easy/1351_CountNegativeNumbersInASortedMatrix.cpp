/**
 * Problem Link : https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        
        for(int i = 0;i<grid.size();i++){
            int left = 0;
            int right = grid[i].size()-1;
            while(left<=right){
                int mid = left +((right-left)>>1);
                if (grid[i][mid]<0) right = mid-1;
                else left = mid+1;
            }ans+=grid[i].size()-left;
        }return ans;
    }
};
