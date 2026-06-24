/**
 * Problem Link : https://leetcode.com/problems/removing-stars-from-a-string/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {

        string ans;

        for(char ch : s) {
            if(ch == '*')
                ans.pop_back();
            else
                ans.push_back(ch);
        }

        return ans;
    }
};
