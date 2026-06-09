/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/seating-arrangement--170647/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canSeatAllPeople(int k, vector<int> &seats) {
        // code here
        for(int i = 0;i<seats.size()-1;i++){
            if(seats[i]==1 && seats[i+1]==1) return false;
            
        }
        int count =0;
        for(int i = 0;i<seats.size();i++){
            if(seats[i]==0 && (i==0|| seats[i-1]==0)&&(i==seats.size()-1 ||seats[i+1]==0)){
                seats[i]=1;
                count++;
            }
        }return count>=k;
    }
};
