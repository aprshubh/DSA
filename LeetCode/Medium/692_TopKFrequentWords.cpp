/**
 * Problem Link : https://leetcode.com/problems/top-k-frequent-words/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    struct Compare {
        bool operator()(pair<int, string>& a, pair<int, string>& b) {

            if (a.first == b.first)
                return a.second < b.second;

            return a.first > b.first;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string, int> mp;

        for (string s : words) {
            mp[s]++;
        }

        priority_queue<pair<int, string>, vector<pair<int, string>>, Compare>
            pq;

        for (auto [word, freq] : mp) {

            pq.push({freq, word});

            if (pq.size() > k)
                pq.pop();
        }

        vector<string> ans;

        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
