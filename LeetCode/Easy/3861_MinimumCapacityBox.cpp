/**
 * Problem Link : https://leetcode.com/problems/minimum-capacity-box/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {

        int ans = -1;
        int cap =INT_MAX;
        int i = 0;
        for(int x : capacity){
            if(itemSize<=x && cap>x-itemSize){
                ans = i;
                cap =x-itemSize;
            }
            i++;
        }return ans;
        
    }
};
