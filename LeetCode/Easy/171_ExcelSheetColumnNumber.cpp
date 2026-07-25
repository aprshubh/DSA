/**
 * Problem Link : https://leetcode.com/problems/excel-sheet-column-number/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for ( int x : columnTitle){
            ans = ans*26 + (x-'A')+1;
        }return ans;
        
    }
};
