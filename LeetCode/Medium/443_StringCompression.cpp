/**
 * Problem Link : https://leetcode.com/problems/string-compression/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;
        int i = 0;
        while(i<chars.size()){
            char curr = chars[i];
            int count =0;

            while(i<chars.size() && chars[i]==curr){
                i++;
                count++;

            }chars[write]=curr;
            write++;
            if(count>1){
                string num = to_string(count);
                for(char x : num){
                    chars[write++]=x;
                }
            }
        }return write;
        
        
    }
};
