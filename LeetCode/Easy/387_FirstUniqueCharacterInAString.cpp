/**
 * Problem Link : https://leetcode.com/problems/first-unique-character-in-a-string/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {

        int freq[26]={0};

        for( char x : s ) freq[x-'a']++;
        int i = 0;
        for( char x : s){
            if ( freq[x-'a']==1) return i;
            i++;
        }return -1;
        
    }
};
