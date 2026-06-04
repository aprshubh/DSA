/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	string reverseWords(string &s) {
		// code here
		vector<string> words;
		stringstream ss(s);
		string token;
		while (getline(ss, token, '.')) {
			if (token.size())
				words.push_back(token);
		} reverse(words.begin(), words.end());
		string ans = "";
		for (int i = 0; i<words.size(); i++) {
			
			ans += words[i];
			if (i != words.size() - 1)
				ans += ".";
		} return ans;
	}
};

