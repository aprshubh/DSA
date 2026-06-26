/**
 * Problem Link : https://leetcode.com/problems/valid-perfect-square/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {

        int left =1;
        int right = num;
        while (left<=right){
            long mid=left+((right-left)>>1);
            if(mid*mid==num) return true;
            else if(mid*mid>num) right=mid-1;
            else left= mid+1;
        }return false;

        
    }
};
