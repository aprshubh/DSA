/**
 * Problem Link : https://leetcode.com/problems/arranging-coins/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {

        int left = 1;
        int right = n;
        while (left <= right) {
            long mid = left + ((right-left)>>1);
            if((mid*(mid+1))/2>n) right=mid-1;
            else left=mid+1;
        }return right;
    }
};
