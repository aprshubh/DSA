/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        sort(arr.begin(),arr.end());
        string a = arr[0];
        string b = arr[arr.size()-1];
        int i = 0;
        int j = 0;
        while(i<a.size() && j<b.size()){
            if(a[i]!=b[j]) break;
            i++;
            j++;
        }string ans = a.substr(0,i);
        return ans;
        
    }
};
