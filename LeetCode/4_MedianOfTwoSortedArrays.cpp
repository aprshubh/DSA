/**
 * Problem Link : https://leetcode.com/problems/median-of-two-sorted-arrays/
 * Platform     : LeetCode
 * Difficulty   : Hard
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int target = (m + n) >> 1;

        int i = 0, j = 0;
        int curr = 0, prev = 0;

        for (int k = 0; k <= target; k++) {
            prev = curr;
            if (i < m && (j >= n || nums1[i] <= nums2[j])) {
                curr = nums1[i];
                i++;
            } else {
                curr = nums2[j];
                j++;
            }
        }
        if ((m + n) % 2 != 0) {
            return curr;
        }
        return (prev + curr) / 2.0;
    }
};
