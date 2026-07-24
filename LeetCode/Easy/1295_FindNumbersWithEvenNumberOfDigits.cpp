/**
 * Problem Link : https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int output = 0;
        int count = 0;
        for(int x : nums){
            while(x>0){
                count++;
                x=x/10;
            }if(count%2==0) output++;
        }return output;
        
    }
};
