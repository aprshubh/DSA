/**
 * Problem Link : https://leetcode.com/problems/palindrome-number/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int temp = x;

        long reverse = 0;
        while(x>0){
            int dig = x%10;
            reverse = reverse*10 +dig;
            x=x/10;
        }return temp==reverse;
        
    }
};
