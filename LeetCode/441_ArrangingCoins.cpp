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
        return (-1 + sqrt(1+8*n))/2;
    }
};
