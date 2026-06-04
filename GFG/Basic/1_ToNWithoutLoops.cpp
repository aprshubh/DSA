/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	void printTillN(int n) {
		if (n == 1) {
			cout << n << " ";
			return;
		}
		
		printTillN(n - 1);
		cout << n << " ";
	}
};

