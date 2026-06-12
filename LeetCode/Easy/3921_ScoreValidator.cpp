/**
 * Problem Link : https://leetcode.com/problems/score-validator/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0;
        int counter= 0;
        for(string x :events){
            if(x>="0" && x<="6") score+=stoi(x);
            else if (x=="W") {
                counter++;
                if(counter==10) break;
            }
            else score++;
        }return {score,counter};
    }
};
