/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/multiply-array-1658312632/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int product(int arr[], int n) {

        int ans = 1;

        for(int i = 0; i < n; i++) {
            ans *= arr[i];
        }

        return ans;
    }
};
