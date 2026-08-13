/**
 * Problem Link : https://leetcode.com/problems/kth-largest-element-in-an-array/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int,vector<int>,greater<int>> pq;

        for(int x : nums){
            pq.push(x);
            if(pq.size()>k) pq.pop();
        }return pq.top();
        
    }
};
