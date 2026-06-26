/**
 * Problem Link : https://leetcode.com/problems/find-smallest-letter-greater-than-target/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int left = 0;
        int right = letters.size() - 1;
        while (left <= right) {
            int mid = left + ((right - left) >> 1);
            if (letters[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return letters[left % letters.size()];
    }
};
