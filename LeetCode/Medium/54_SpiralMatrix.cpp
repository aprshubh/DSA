/**
 * Problem Link : https://leetcode.com/problems/spiral-matrix/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int rowstart = 0;
        int colstart = 0;
        int rowend = matrix.size() - 1;
        int colend = matrix[0].size() - 1;

        vector<int> ans;

        while (rowstart <= rowend && colstart <= colend) {

            
            for (int i = colstart; i <= colend; i++) {
                ans.push_back(matrix[rowstart][i]);
            }
            rowstart++;

            
            if (rowstart <= rowend) {
                for (int i = rowstart; i <= rowend; i++) {
                    ans.push_back(matrix[i][colend]);
                }
            }
            colend--;

            
            if (rowstart <= rowend) {
                for (int i = colend; i >= colstart; i--) {
                    ans.push_back(matrix[rowend][i]);
                }
                rowend--;
            }

           
            if (colstart <= colend) {
                for (int i = rowend; i >= rowstart; i--) {
                    ans.push_back(matrix[i][colstart]);
                }
                colstart++;
            }
        }

        return ans;
    }
};
