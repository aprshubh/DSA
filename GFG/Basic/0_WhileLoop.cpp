/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/while-loop/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void utility(int x) {
        // code here
        while(x>=0){
            cout<<x<<" ";
            x--;
        }
    }
};
