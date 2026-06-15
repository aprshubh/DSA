/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/remove-vowels-from-string1446/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
       int i = 0;
       for(int j = 0;j<s.size();j++){
           if (s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u'){
               s[i]=s[j];
               i++;
               
           }
       }return s.substr(0,i);
    }
};
