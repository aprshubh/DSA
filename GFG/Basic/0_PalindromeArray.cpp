/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/perfect-arrays4645/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPalindrome(vector<int> &arr) {
        // code here
        int left = 0;
        int right = arr.size()-1;
        while(left<right){
            if(arr[left]!=arr[right] ) return false;
            left++;
            right--;
        }return true;
    }
};

