/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/series-ap5310/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int nthTermOfAP(int a1, int a2, int n) {
        // code here
        return a1+((n-1)*(a2-a1));
    }
};
