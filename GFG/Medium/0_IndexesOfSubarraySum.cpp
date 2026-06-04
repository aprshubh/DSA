/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	vector<int> subarraySum(vector<int> &arr, int target) {
		
		int n = arr.size();
		int sum = 0;
		int j = 0;
		
		for (int i = 0; i < n; i++) {
            sum += arr[i];
            
            while (sum > target && j < i) {
                sum -= arr[j++];
            }
           
            if (sum == target) {
                return {j + 1, i + 1};
            }
        } 
        
        return {-1};
		
	}
};

