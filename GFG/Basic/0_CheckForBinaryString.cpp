/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/check-for-binary/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

// Return true if s is binary, else false
class Solution {
  public:
    bool isBinary(string& s) {
        // Your code here
        for(char x : s){
            if(x!='0' && x!='1') return false;
        }return true;
    }
};
