/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        // code here
        
        int left = 0;
        int right= arr.size()-1;
        while (left<right){
            int mid = left +((right-left)>>1);
            if ( arr[mid]>=k) right = mid;
            else left = mid+1;
        }return (arr[right]==k)?right:-1;
    }
};
