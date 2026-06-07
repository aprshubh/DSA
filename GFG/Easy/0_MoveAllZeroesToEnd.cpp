/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int j = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0) {
                if (i != j)
                    swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};

