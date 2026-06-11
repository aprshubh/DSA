/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/get-min-at-pop/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[], int n) {
	// code here
	stack<int> st;
	int mini = arr[0];
	st.push(mini);
	for (int i = 1 ; i<n; i++) {
		if (mini>arr[i]) {
			st.push(arr[i]);
			mini = arr[i]; }
			else st.push(mini);
		} return st;
	}
	
	// Function to print minimum value in stack each time while popping.
	void _getMinAtPop(stack<int> st) {
		
		while (!st.empty()) {
			cout << st.top() << " ";
			st.pop();
		}
		// code here
	}

