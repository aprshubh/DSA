/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	bool isBalanced(string& s) {
		
		stack<char> st;
		
		for (char x : s) {
			if (x == '[' || x == '{' || x == '(')
				st.push(x);
			else {
				if (st.empty())
					return false;
				if (x == ']' && st.top() == '[' ||
				x == '}' && st.top() == '{' ||
				x == ')' && st.top() == '(') st.pop();
				else
					return false;
			}
		} return st.empty();
	}
};

