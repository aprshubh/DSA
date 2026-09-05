/**
 * Problem Link : https://leetcode.com/problems/minimum-moves-to-reach-target-score/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        
        int count = 0;
        while ( target >1){
            if(maxDoubles==0){
                return count+=target-1;
            }
            if(target%2==0 && maxDoubles>0){
                target/=2;
                count++;
                maxDoubles--;
            }
            else {
                target-=1;
                count++;
            }
        }return count;
        
    }
};
