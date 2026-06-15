/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	void helper(string &s, int left, int right, string &ans) {
		int len = ans.size();
		while (left >= 0 && right<s.size() && s[left] == s[right]) {
			left--;
			right++;
			
		} if (right - left - 1>len) ans = s.substr(left + 1, right - left - 1);
	}
	string longestPalindrome(string &s) {
		
		if (s.size()<2)
			return s;
		string ans (1, s[0]);
		for (int i = 1; i<s.size() - ans.size()/2; i++) {
			helper(s, i, i, ans);
			helper(s, i, i + 1, ans);
		} return ans;
		
	}
};

