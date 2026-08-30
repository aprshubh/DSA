/**
 * Problem Link : https://leetcode.com/problems/nearest-available-drone/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans = -1;
        int dis = INT_MAX;

        for (int i = 0; i < drones.size(); i++) {
            int temp = abs(drones[i][0] - target[0]) +
                       abs(drones[i][1] - target[1]);

            if (temp <= drones[i][2] && temp < dis) {
                dis = temp;
                ans = i;
            }
        }

        return ans;
    }
};
