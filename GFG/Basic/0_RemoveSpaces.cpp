/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/remove-spaces0128/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        int i=0;
        for(int j=0;j<s.size();j++){
            if(s[j]!=' '){
                s[i]=s[j];
                i++;
            }
        }return s.substr(0,i);
    }
};
