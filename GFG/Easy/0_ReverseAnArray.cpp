/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-an-array/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // reverse(arr.begin(),arr.end());
        int i = 0;
        int j = arr.size()-1;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    }
};
