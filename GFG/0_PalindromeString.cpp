/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPalindrome(string& s) {
        
        
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if ( s[i++]!=s[j--]) return false;
        }return true;
        // code here
        
    }
};
