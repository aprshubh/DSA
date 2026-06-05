/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/sum-of-digits-of-a-number/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int sumOfDigits(int n) {
        int sum = 0;
        while(n>0){
            int dig = n%10;
            sum+=dig;
            n=n/10;
        }return sum;
        
    }
};
