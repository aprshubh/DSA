/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/power-using-recursion/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int RecursivePower(int n, int p) {
        if (p == 0) return 1;

        return n * RecursivePower(n, p - 1);
    }
};
