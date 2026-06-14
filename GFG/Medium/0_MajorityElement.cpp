/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/majority-vote/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        if (arr.size()<3) arr;
        
        vector <int> ans;
        unordered_map<int,int> mp;
        
        int n = arr.size()/3;
        for(int x : arr) mp[x]++;
        for(auto[key,value]:mp){
            if (value>n)ans.push_back(key);
        }if(ans.size()==2 && ans[1]<ans[0]) swap(ans[0],ans[1]);
        return ans;
    }
};
