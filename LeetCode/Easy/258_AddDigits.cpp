/**
 * Problem Link : https://leetcode.com/problems/add-digits/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int add (int &num){
        int dig =0;
        while(num>0){
            dig+=num%10;
            num=num/10;
        }return dig;
    }
    int addDigits(int num) {
        while(num>9){
            num=add(num);
        }return num;
        
    }
};
