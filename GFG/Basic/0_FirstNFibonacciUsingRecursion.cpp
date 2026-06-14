/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

// User function template for C++

class Solution {
  public:
  
  void helper(int n , vector<int> & arr){
      
        if(n==2) return ;
        int dig = arr[arr.size()-1]+arr[arr.size()-2];
        arr.push_back(dig);
        helper(n-1,arr);
        
      
  }
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> arr;
        arr.push_back(0);
        if(n==1) return arr;
        arr.push_back(1);
        if(n==2 )return arr;
        
        helper(n,arr);
        return arr;
    }
};
