/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	vector<int> getMinMax(vector<int> &arr) {
		int mn = arr[0];
		int mx = arr[0];
		for (int x :arr) {
			if (x>mx)
				mx = x;
			if (x<mn)
				mn = x;
		} return {mn, mx};
		
	}
};

