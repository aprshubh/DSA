/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/perfect-numbers3207/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPerfect(int n) {
        // code here
        int sum = 1;
        for (int i = 2;i<=sqrt(n);i++){
            if(n%i==0) {
                sum+=i;
                sum+=n/i;}
        }return sum==n;
    }
};
