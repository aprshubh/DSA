/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/maximum-product-of-two-numbers2730/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxProduct(vector<int>& arr) {
       int max=arr[0];
       int smax=arr[1];
       if(smax>max) swap(max,smax);
       for(int i = 2;i<arr.size();i++){
           if(arr[i]>=max){
               smax=max;
               max=arr[i];
               
           }else if(arr[i]<max && arr[i]>smax){
               smax=arr[i];
           }
       }return max*smax;
        
    }
};
