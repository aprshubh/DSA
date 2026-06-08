/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/count-total-digits-in-a-number/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countDigits(int n) {
        // Code here
        if(n<10) return 1;
        return 1+ countDigits(n/10);
    }
};
