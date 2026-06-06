/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
       vector<int> array(arr.size(),0);
        for(int x :arr){
            array[x-1]++;
        }return array;
    }
};

