/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/insertion-in-deque/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    deque<int> dqInsertion(vector<int>& arr) {
        // code here
        deque<int> d;
        for(int x : arr) d.push_back(x);
        return d;
        
    }
};
