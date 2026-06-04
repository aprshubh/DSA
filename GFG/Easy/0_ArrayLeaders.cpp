/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	vector<int> leaders(vector<int>& arr) {
		std::vector<int> ans;
		int n = arr.size() - 1;
		int largest = arr[n];
		for (int i = n; i >= 0; i--) {
			if (arr[i] >= largest)
				{ans.push_back(arr[i]);
			largest = arr[i];
		}
		
	}
	reverse(ans.begin(), ans.end());
	
	return ans;
	
}
};

