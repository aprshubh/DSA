/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/even-occurring-elements4332/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findEvenOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int x : arr) mp[x]++;

        vector<int> ans;
        unordered_set<int> st;

        for(int x : arr) {
            if(mp[x] % 2 == 0 && !st.count(x)) {
                ans.push_back(x);
                st.insert(x);
            }
        }

        if(ans.empty()) return {-1};

        return ans;
    }
};

