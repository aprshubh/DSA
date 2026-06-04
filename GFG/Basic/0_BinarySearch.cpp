/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	bool binarySearch(vector<int>& arr, int k) {
		int left = 0;
		int right = arr.size() - 1;
		while (left<=right) {
			int mid = left + ((right - left)>> 1);
			if (k == arr[mid])
				return true;
			else if (k>arr[mid])
				left = mid + 1;
			else
				right = mid - 1;
		} return false;
		
	}
};

