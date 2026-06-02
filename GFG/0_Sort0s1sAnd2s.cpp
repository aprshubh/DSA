/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void sort012(vector<int>& arr) {
        int i = 0;
        int j = 0;
        int k = arr.size()-1;
        while (i<=k){
            
            if(arr[i]==0 ){
                int temp = arr[i];
                arr[i++]=arr[j];
                arr[j++]=temp;
                
            }else if (arr[i]==2){
                int temp = arr[i];
                arr[i]=arr[k];
                arr[k--]=temp;
            }else i++;
        }
        
        
    }
};
