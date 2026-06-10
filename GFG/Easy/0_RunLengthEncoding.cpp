/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/run-length-encoding/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string encode(string &s) {
        
        if(s.empty()) return "";
        
        string ans ="";
        ans+=s[0];
        int count = 1;
        for(int i = 1;i<s.size();i++){
            if(s[i]==ans.back()){
                count++;
            }else{
                ans+=to_string(count);
                ans+=s[i];
                count =1;
            }
            
        }return ans+=to_string(count);
        
    }
};
