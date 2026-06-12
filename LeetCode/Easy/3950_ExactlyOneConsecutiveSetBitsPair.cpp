/**
 * Problem Link : https://leetcode.com/problems/exactly-one-consecutive-set-bits-pair/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool consecutiveSetBits(int n) {
        // string str = "";
        // while (n>0){
        //     int rem =n%2;
        //     n=n/2;
        //     str+=(rem+'0');
        // }
        // reverse(str.begin(),str.end());
        // int count =0;

        // for(int i = 0;i<str.size()-1;i++){
        //     if(str[i] == '1' && str[i+1] == '1') count++;
        //     if(count>1) return false;
        // }return count==1;
        int pairs = n & (n >> 1);
        
        
        return pairs > 0 && (pairs & (pairs - 1)) == 0;
    }
};
