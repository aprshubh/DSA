/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	int findFloor(vector<int>& arr, int x) {
	    int left=0;
	    int right = arr.size()-1;
		
		int ans = -1;
		
		while (left <= right) {
			int mid = left + ((right - left)>>1);
			
			if (arr[mid] <= x) {
				ans = mid;
				left = mid + 1;
			} else {
				right = mid - 1;
			}
		}
		
		return ans;
		
	}
};

