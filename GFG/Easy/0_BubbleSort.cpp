/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/bubble-sort/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	void bubbleSort(vector<int>& arr) {
		
		for (int i = 0; i<arr.size(); i++) {
			bool swaped = false;
			
			for (int k = 0; k<arr.size() - i-1; k++) {
				if (arr[k]>arr[k + 1]) {
					swap(arr[k], arr[k + 1]);
					swaped = true;
					
				}
			} if (!swaped) break;
		}
		// code here
		
	}
};

