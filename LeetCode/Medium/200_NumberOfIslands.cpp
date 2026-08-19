/**
 * Problem Link : https://leetcode.com/problems/number-of-islands/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void abc(vector<vector<char>>& grid, int i, int j) {
         
        if (i < 0 || i >= grid.size() ||
            j < 0 || j >= grid[0].size() ||
            grid[i][j] == '0') {
            return;
        }

        
        grid[i][j] = '0';

        
        abc(grid, i + 1, j); 
        abc(grid, i - 1, j); 
        abc(grid, i, j + 1); 
        abc(grid, i, j - 1); 
    }
    int numIslands(vector<vector<char>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    count++;
                    abc(grid, i, j);
                }
            }
        }return count;
    }
};
