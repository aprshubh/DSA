/**
 * Problem Link : https://leetcode.com/problems/find-the-degree-of-each-vertex/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            for (int j = 0;j<i;j++){
                if(matrix[i][j]==1){
                    arr[i]++;
                    arr[j]++;
                }
            }
        }return arr;
    }
};
