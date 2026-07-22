/**
 * Problem Link : https://leetcode.com/problems/koko-eating-bananas/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long helper(vector<int>& piles, int mid) {
        long sum = 0;
        for (int x : piles)
            sum += (x + mid - 1) / mid;
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        while (left <= right) {
            int mid = left + ((right - left) >> 1);
            long ans=helper(piles, mid);
            if (ans <= h)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }
};
