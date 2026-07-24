/**
 * Problem Link : https://leetcode.com/problems/valid-palindrome/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            while (left < right && !isalpha(s[left]))
                left++;
            while (left < right && !isalpha(s[right]))
                right--;
            if (left < right && tolower(s[left]) != tolower(s[right]))
                return false;
            left++;
            right--;
        }
        return true;
    }
};
