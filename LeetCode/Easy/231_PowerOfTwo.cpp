/**
 * Problem Link : https://leetcode.com/problems/power-of-two/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) { return n > 0 && (n & (n - 1)) == 0; }
};
