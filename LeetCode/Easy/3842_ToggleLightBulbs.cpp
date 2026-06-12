/**
 * Problem Link : https://leetcode.com/problems/toggle-light-bulbs/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {

        set<int> st;
        for (int b : bulbs) {
            if (!st.count(b)) st.insert(b);
            else st.erase(b);
        }
        return std::vector<int>(st.begin(), st.end());
    }
};
