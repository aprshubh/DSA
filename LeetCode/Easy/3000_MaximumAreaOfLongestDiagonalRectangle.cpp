/**
 * Problem Link : https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {

        int area = 0;
        int diagonal = 0;
        for (int i = 0; i < dimensions.size(); i++) {
            int l = dimensions[i][0];
            int b = dimensions[i][1];
            int d = (l * l + b * b);
            if (d > diagonal) {
                diagonal = d;
                area = l * b;
            } else if (d == diagonal) {
                area = max(area, l * b);
            }
        }
        return area;
    }
};
