/**
 * Problem Link : https://leetcode.com/problems/sum-multiples/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfMultiples(int n) {

        if(n<3) return 0 ;

        long ans=0;
        for( int i = 3; i<=n;i++){
            if(i%3==0 || i%5==0||i%7==0) ans+=i;
        }return ans;
        
    }
};
