/**
 * Problem Link : https://leetcode.com/problems/sort-characters-by-frequency/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> mp;
        for (char x : s)
            mp[x]++;

        priority_queue<pair<int, char>> pq;
        for (auto [key, value] : mp) {
            pq.push({value, key});
        }
        string ans = "";
        while (!pq.empty()) {
            auto p = pq.top();
            pq.pop();

            for (int i = 0; i < p.first; i++)
                ans += p.second;
        }
        return ans;
    }
};
