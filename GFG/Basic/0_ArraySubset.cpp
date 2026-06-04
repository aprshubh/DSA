/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        
        std::unordered_map<int,int> mp;
        for(int x :a){
            mp[x]++;
        }
        for(int x :b){
            if(!mp[x]) return false;
            mp[x]--;
        }return true;
        
        
        
    }
};
