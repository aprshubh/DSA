/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-a-string/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        
        // reverse(s.begin(),s.end());
        // return s;
        
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            swap(s[i++],s[j--]);
        }return s;
        
    }
};

