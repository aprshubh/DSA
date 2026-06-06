/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/factorial5739/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int factorial(int n) {
        // code here
        if (n==1) return 1;
        return n*factorial(n-1);
    }
};
