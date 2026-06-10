/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> winner(string arr[], int n) {

        unordered_map<string, int> mp;

        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        string ans = "";
        int maxi = 0;

        for (auto [key, value] : mp) {
            if (value > maxi || (value == maxi && key < ans)) {
                ans = key;
                maxi = value;
            }
        }

        return {ans, to_string(maxi)};
    }
};
