/**
 * Problem Link : https://leetcode.com/problems/optimal-partition-of-string/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partitionString(string s) {

        int count = 0;
        int i = 0;

        unordered_set<char> st;
        while(i<s.size()) {
            unordered_set<char> st;
            while (!st.count(s[i])) {

                st.insert(s[i]);
                i++;
            }
            count++;
        }
        return count;
    }
};
