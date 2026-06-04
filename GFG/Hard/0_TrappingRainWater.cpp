/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
 * Platform     : GFG
 * Difficulty   : Hard
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxWater(vector<int> &arr) {
        if (arr.size() < 3)
            return 0;
        int n = arr.size()-1;
        int total = 0;
        int right = arr[n];
        int left = arr[0];
        int i=1;
        int j =n-1;
        while(i<=j){
            if(left>right){
                if(arr[j]>right) right=arr[j--];
                else total+=right-arr[j--];
                
            }else {
                if(arr[i]>left) left=arr[i++];
                else total+=left-arr[i++];
                
            }
        }return total;
    }
};
