/**
 * Problem Link : https://leetcode.com/problems/valid-digit-number/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validDigit(int n, int x) {
        int count = 0;
        while(n>=10){
            int dig = n%10;
            if(dig==x) count++;
            if(count==2) return false;
            n=n/10;
        }return n!=x && count==1;
    }
};
