/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	char nonRepeatingChar(string &s) {
		//  code here
		int freq[26] = {0};
		for (char x : s) {
			freq[x - 'a']++;
		} for (char x : s) {
			if (freq[x - 'a'] == 1)
				return x;
		} return '$';
	}
};

