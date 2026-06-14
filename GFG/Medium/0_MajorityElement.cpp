/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/majority-vote/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        
       
        int cand1 = 0, cand2 = 0;
        int count1 = 0, count2 = 0;
        
        for (int x : arr) {
            if (x == cand1) {
                count1++;
            } else if (x == cand2) {
                count2++;
            } else if (count1 == 0) {
                cand1 = x;
                count1 = 1;
            } else if (count2 == 0) {
                cand2 = x;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }
        
       
        count1 = 0;
        count2 = 0;
        for (int x : arr) {
            if (x == cand1) count1++;
            else if (x == cand2) count2++;
        }
        
        vector<int> ans;
        if (count1 > n / 3) ans.push_back(cand1);
        if (count2 > n / 3) ans.push_back(cand2);
        
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};
