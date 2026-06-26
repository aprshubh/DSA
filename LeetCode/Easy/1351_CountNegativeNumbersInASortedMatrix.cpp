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

        int rows = grid.size();
        int cols = grid[0].size() - 1;

        int row = 0;
        int col = cols;
        int ans = 0;
        while (row < rows && col >= 0) {
            if (grid[row][col] < 0) {
                ans += rows - row;
                col--;
            } else
                row++;
        }
        return ans;
    }
};
