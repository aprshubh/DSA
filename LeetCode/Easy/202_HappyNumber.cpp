/**
 * Problem Link : https://leetcode.com/problems/happy-number/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {

        unordered_set<int> st;
        while(n!=1){
            st.insert(n);
            int sum= 0;
            while(n>0){
                int dig = n%10;
                sum+=dig*dig;
                n=n/10;
            }if(st.count(sum)) return false;
            n=sum;

        }return true;
        
    }
};
