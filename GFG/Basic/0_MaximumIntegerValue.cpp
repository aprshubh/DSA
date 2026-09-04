/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/maximum-integer-value1434/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maximumIntegerValue(string s) {
        // code here
        int ans =0;
        for(int i = 0;i<s.size();i++){
            int a = s[i]-'0';
            
            ans=max(ans*a,ans+a);
        }return ans;
    }
};
