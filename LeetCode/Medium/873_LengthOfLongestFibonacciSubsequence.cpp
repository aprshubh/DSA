/**
 * Problem Link : https://leetcode.com/problems/length-of-longest-fibonacci-subsequence/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(int i, int j, unordered_map<int, int>& mp,
                int& ans, int count) {

        int z = i + j;

        if (mp.count(z)) {
            count = 3;

            i = j;
            j = z;

            while (mp.count(i + j)) {
                count++;

                int z = i + j;
                i = j;
                j = z;
            }
        }

        ans = max(ans, count);
    }

    int lenLongestFibSubseq(vector<int>& arr) {
        int ans = 0;

        unordered_map<int, int> mp;

        for (int x : arr)
            mp[x] = x;

        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                helper(arr[i], arr[j], mp, ans, 0);
            }
        }

        return ans;
    }
};
