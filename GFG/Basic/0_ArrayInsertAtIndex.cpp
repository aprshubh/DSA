/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/array-insert-at-index/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        // code here
        
        int n = arr.size()-1;
        arr.push_back(arr[n]);
        for(int i = n;i>=index;i--){
            arr[i]=arr[i-1];
        }arr[index]=val;
        
    }
};

