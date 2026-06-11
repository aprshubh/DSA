/**
 * Problem Link : https://leetcode.com/problems/zigzag-conversion/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows==1 || numRows>=s.size()) return s;

        string ans = "";
        int jump = 2*numRows-2;

        for(int i = 0 ;i<numRows;i++){
            
            for(int j = i;j<s.size();j+=jump){
                ans+=s[j];
                int xjump=j+jump-2*i;
                if(i!=0 && i!=numRows-1 && xjump<s.size()){
                    ans+=s[xjump];
                }
            }


        }return ans;
        
    }
};
