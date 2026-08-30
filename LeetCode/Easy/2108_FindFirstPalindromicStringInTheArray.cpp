/**
 * Problem Link : https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:bool isPalindrom(string s){
    int left = 0;
    int right = s.size()-1;
    while(left<right){
        if(s[left]!=s[right]) return false;
        left++;
        right--;
    }return true;
}
    string firstPalindrome(vector<string>& words) {
        for(string s : words){
            if(isPalindrom(s)) return s;
        }return "";
        
    }
};
