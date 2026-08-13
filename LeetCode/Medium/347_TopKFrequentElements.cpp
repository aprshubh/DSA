/**
 * Problem Link : https://leetcode.com/problems/top-k-frequent-elements/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        for(int x : nums){
            mp[x]++;
        }
       priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
       for(auto [key,value]:mp){
        pq.push({value,key});
        if(pq.size()>k) pq.pop();
       }
       vector<int> ans;
       while(!pq.empty()){
        auto p= pq.top();
        ans.push_back(p.second);
        pq.pop();
       }return ans;
        
    }
};
