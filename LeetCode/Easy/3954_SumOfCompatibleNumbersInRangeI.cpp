/**
 * Problem Link : https://leetcode.com/problems/sum-of-compatible-numbers-in-range-i/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {

        int total=0;
        int x=max(1, n - k);
        while(abs(n-x)<=k){
            if((n & x)==0) total+=x;
            x++;
        }return total;
        
    }
};
