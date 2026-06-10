/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/implement-strstr/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	int firstOccurence(string& txt, string& pat) {
		// code here
		for (int i = 0; i + pat.size() <= txt.size(); i++) {
			if (txt.compare(i, pat.size(),pat) == 0)
				return i;
		} return - 1;
	}
};

