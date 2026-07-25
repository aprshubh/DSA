/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/convert-sentence-to-camel-case/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	// Function to convert the given string to Camel Case
	string convertToCamelCase(string& s) {
		string ans = "";
		int i = 0;
		int start = 0;
		while (i<s.size() && s[i] != ' ')
			i++;
		ans += s.substr(start, i-start);
		i++;
		start = i;
		
		for (i ; i <= s.size(); i++) {
			if (i == s.size() || s[i] == ' ') {
				string word = s.substr(start, i - start);
				word[0] = toupper(word[0]);
				ans += word;
				start = i + 1;
			}
		} return ans;
		
	}
};

