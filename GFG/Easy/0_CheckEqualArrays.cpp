/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        
        unordered_map<int,int> mp;
        for (int x :a) mp[x]++;
        for(int x : b){
            if(!mp[x]) return false;
            mp[x]--;
        }return true;
    }
};
