/**
 * Problem Link : https://leetcode.com/problems/to-lower-case/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }return s;
        
    }
};
