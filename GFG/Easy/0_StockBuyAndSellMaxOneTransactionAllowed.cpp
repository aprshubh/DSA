/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/buy-stock-2/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	int maxProfit(vector<int> &prices) {
		// code here
		int maxi = 0;
		int low = prices[0];
		for (int x : prices) {
			low = min(x, low);
			maxi = max(maxi, x - low);
		} return maxi;
	}
};

