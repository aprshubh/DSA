/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int gcd(int a, int b) {
        
        while(b!=0){
            int rem = a%b;
            a=b;
            b=rem;
        }return a;
    }
};

