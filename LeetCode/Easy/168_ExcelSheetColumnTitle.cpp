/**
 * Problem Link : https://leetcode.com/problems/excel-sheet-column-title/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {

        string ans = "";

        while (columnNumber > 0) {
            columnNumber--;

            int dig = columnNumber % 26;
            ans += 'A' + dig;

            columnNumber /= 26;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
