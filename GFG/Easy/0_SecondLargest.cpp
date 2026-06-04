/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/second-largest3735/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int largest = -1;
        int secondLargest = -1;

        for (int num : arr) {
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            }
            else if (num < largest && num > secondLargest) {
                secondLargest = num;
            }
        }

        return secondLargest;
    }
};

