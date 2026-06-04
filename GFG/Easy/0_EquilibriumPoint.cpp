/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
    int total_sum = 0;
    for (int num : arr) total_sum += num; 

    int left_sum = 0;
    for (int i = 0; i < arr.size(); i++) { 
        if (left_sum == total_sum - left_sum - arr[i]) {
            return i; 
        }
        left_sum += arr[i];
    }
    return -1;
}
};
