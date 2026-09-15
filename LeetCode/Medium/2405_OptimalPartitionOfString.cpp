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

        int count = 1;

        unordered_set<char> st;
        for (char x : s) {
            if (st.count(x)) {
                st.clear();
                st.insert(x);
                count++;
            } else {
                st.insert(x);
                
            }
        }
        return count;
    }
};
