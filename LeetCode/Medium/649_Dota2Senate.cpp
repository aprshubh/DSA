/**
 * Problem Link : https://leetcode.com/problems/dota2-senate/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string predictPartyVictory(string senate) {

        queue<int> q1, q2;
        for (int i = 0; i < senate.size(); i++) {
            if (senate[i] == 'R')
                q1.push(i);
            else
                q2.push(i);
        }
        while (!q1.empty() && !q2.empty()) {
            int r = q1.front();
            q1.pop();

            int d = q2.front();
            q2.pop();

            if (r < d)
                q1.push(r + senate.size());
            else
                q2.push(d + senate.size());
        }
        if (q1.empty())
            return "Dire";
        else
            return "Radiant";
    }
};
