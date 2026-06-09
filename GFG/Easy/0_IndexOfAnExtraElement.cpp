/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/index-of-an-extra-element/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        for(int i= 0;i<b.size();i++){
            if(a[i]!=b[i]) return i;
        }return a.size()-1;
    }
};
