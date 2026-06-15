/**
 * Problem Link : https://leetcode.com/problems/check-good-integer/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkGoodInteger(int n) {
        int ans = 0;
        while(n>0){
           int dig = n%10;
           ans+= dig*dig -dig;
           n=n/10; 
        }return ans;
    }
};
