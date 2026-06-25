/**
 * Problem Link : https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {

        sort(potions.begin(), potions.end());

        vector<int> ans;

        for (int spell : spells) {

            int left = 0;
            int right = potions.size() - 1;

            while (left <= right) {

                int mid = left + (right - left) / 2;

                if (1LL * spell * potions[mid] >= success)
                    right = mid - 1;
                else
                    left = mid + 1;
            }

            ans.push_back(potions.size() - left);
        }

        return ans;
    }
};
