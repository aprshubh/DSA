/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/missing-element-of-ap2228/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

// User function template for C++

class Solution {
public:
    int findMissing(vector<int> &arr) {

        int diff = arr[1] - arr[0];

        if(arr.size() == 2)
            return arr[1] + diff;

        int diff2 = arr[2] - arr[1];

        int r = (abs(diff) < abs(diff2)) ? diff : diff2;

        for(int i = 0; i < arr.size()-1; i++) {
            if(arr[i] + r != arr[i+1])
                return arr[i] + r;
        }

        return arr.back() + r;
    }
};
