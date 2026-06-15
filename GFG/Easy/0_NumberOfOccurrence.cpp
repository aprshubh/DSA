/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countFreq(vector<int>& arr, int target) {
        int lowIdx = getLowerBound(arr, target);
        int highIdx = getUpperBound(arr, target);
        
        return highIdx - lowIdx;
    }

private:
   
    int getLowerBound(vector<int>& arr, int target) {
        int left = 0, right = arr.size(); 
        while (left < right) {
            int mid = left + ((right - left) >> 1);
            if (arr[mid] >= target) { 
                right = mid;
                } else {
                left = mid + 1;
            }
        }
        return left;
    }

    int getUpperBound(vector<int>& arr, int target) {
        int left = 0, right = arr.size();
        while (left < right) {
            int mid = left + ((right - left) >> 1);
            if (arr[mid] > target) { 
                right = mid; 
                } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
