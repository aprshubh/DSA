/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	bool isPowerofTwo(int n) {
		// code here
		return n>0 && (((n - 1)& n) == 0);
	}
};

