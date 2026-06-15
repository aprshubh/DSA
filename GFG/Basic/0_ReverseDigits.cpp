/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-digit0316/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int ans= 0;
        while (n>0){
            ans =ans*10+(n%10);
            n=n/10;
        }return ans;
    }
};
