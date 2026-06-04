/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	int missingNum(vector<int>& arr) {
		long long sum = 0;
		int n = arr.size();
		for (int i = 0 ; i<n; i++) {
			sum += arr[i];
		}
		return (1LL*(n + 1)*(n + 2))/2 - sum;
		
	}
};

