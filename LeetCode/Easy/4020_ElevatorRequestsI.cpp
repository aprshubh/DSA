/**
 * Problem Link : https://leetcode.com/problems/elevator-requests-i/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans = requests[0];
        for(int i = 0;i<requests.size()-1;i++){
            ans+=abs(requests[i]-requests[i+1]);
        }return ans;
        
    }
};
