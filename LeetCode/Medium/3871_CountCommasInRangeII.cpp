/**
 * Problem Link : https://leetcode.com/problems/count-commas-in-range-ii/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long count = 0;
        int i = 1;
        long long dig = 1000;
        while(n>=dig){
            long long temp = dig*1000;
            if(n<temp) return count+=(n-dig+1)*i;
            else {
                count+=(temp-dig)*i;
                dig=temp;
                i++;
            }

        }return count;
        
    }
};
