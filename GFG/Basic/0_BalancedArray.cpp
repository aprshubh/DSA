/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/balanced-array07200720/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	int minValueToBalance(vector<int> &arr) {
		// code here
		int left = 0;
		int right = arr.size() - 1;
		int leftsum = 0;
		int rightsum = 0;
		while (left<right) {
			leftsum += arr[left++];
			rightsum += arr[right--];
			
		} return abs(leftsum - rightsum);
	}
};

