/**
 * Problem Link : https://leetcode.com/problems/find-the-least-frequent-digit/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int, int> mp;
        while (n > 0) {
            int dig = n % 10;
            mp[dig]++;
            n = n / 10;
        }
        int minkey = INT_MAX;
        int minval = INT_MAX;
        for (auto [key, val] : mp) {
            if (val < minval) {
                minkey = key;
                minval = val;
            } else if (val == minval && minkey > key)
                minkey = key;
        }
        return minkey;
    }
};
