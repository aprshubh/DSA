/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        
        int j = 0;
        for(int i = 1;i<arr.size();i++){
            if(arr[j]!=arr[i]){
                j++;
                if(i!=j){
                    arr[j]=arr[i];
                }
            }
        }arr.resize(j+1);
        return arr;
        // code here
        
    }
};
