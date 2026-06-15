/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	int countFreq(vector<int>& arr, int target) {
		int left = 0;
		int right = arr.size() - 1;
		while (left <= right) {
			int mid = left + ((right - left)>> 1);
			if (arr[mid] == target) {
				int count = 0;
				int midd = mid;
				while (arr[midd] == target) {
					count++;
					midd--;
					
				}
				while (arr[mid + 1] == target)
					{
					count++;
					mid++;
				} return count;
				
			} else if (arr[mid]>target) right = mid - 1;
			else
				left = mid + 1;
		} return 0;
		
	}
};

