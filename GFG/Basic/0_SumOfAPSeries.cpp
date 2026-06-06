/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/sum-of-ap-series4512/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int sumOfAP(int n, int a, int d) {
        return (n * (2*a + (n-1)*d)) / 2;
    }
};
