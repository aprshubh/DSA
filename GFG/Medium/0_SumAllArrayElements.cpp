/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/sum-all-array-elements/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int arraySum(vector<int>& arr) {
        // code here
        int sum = 0;
        for(int x : arr){
            sum+=x;
        }return sum;
    }
};
