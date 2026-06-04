/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/anagram-1587115620/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        
        // if ( s1.size()!=s2.size()) return false;
        
        
        // std::unordered_map<char,int> mp;
        // for(int x :s1){
        //     mp[x]++;
        // }
        // for(int x :s2 ){
        //     if(!mp[x]) return false;
        //     mp[x]--;
        // }
        // return true;
        if ( s1.size()!=s2.size()) return false;
        
        int arr[26]={};
        for (char x : s1) arr[x -'a']++;
        for (char x : s2) {
            if(!arr[x-'a']) return false;
            arr[x -'a']--;
        }return true;
    }
};
