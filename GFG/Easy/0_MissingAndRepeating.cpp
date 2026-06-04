/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	vector<int> findTwoElement(vector<int>& arr) {
		
		int i = 0;
		
		int n = arr.size();
		
		while (i<n) {
			int correct = arr[i]-1;
			if (arr[i] != arr[correct])
				swap(arr[i], arr[correct]);
			else
				i++;
		}
		for (int k = 0 ; k<n; k++) {
			if (arr[k] != k + 1)
				return {arr[k], k + 1};
		} return {};
		
	}
};

