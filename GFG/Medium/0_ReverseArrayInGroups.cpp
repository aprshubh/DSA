/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	void reverseInGroups(vector<int> &arr, int k) {
		// code here
		
		int n = arr.size();
		
		for (int i = 0; i<n; i += k) {
			int left = i;
			int right = min(n - 1, i + k - 1);
			while (left<right) {
				swap(arr[left], arr[right]);
				left++;
				right--;
			}
		}
		
	}
};

