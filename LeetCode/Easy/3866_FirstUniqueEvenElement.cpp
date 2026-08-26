/**
 * Problem Link : https://leetcode.com/problems/first-unique-even-element/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(int  x : nums) {
            if(x%2==0) mp[x]++;
        }
        for(int x :nums){
            if(x%2==0 && mp[x]==1) return x; 
        }return -1;
    }
};
