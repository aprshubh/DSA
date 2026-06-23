/**
 * Problem Link : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int maxi = *max_element(candies.begin(), candies.end());
        vector<bool> ans;
        for (int x : candies) {
            ans.push_back(x + extraCandies >= maxi);
        }
        return ans;
    }
};
