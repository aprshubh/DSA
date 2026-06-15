/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/last-index-of-15847/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lastIndex(string s) {
        for(int i = s.size()-1;i>=0;i--){
            if(s[i]=='1') return i;
        }return -1;
    }
};
