/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	int majorityElement(vector<int>& arr) {
		// 		std::unordered_map<int, int> mp;
		// 		for (int x : arr) {
		// 			mp[x]++;
		// 		}
		// 		for (auto [key, value] : mp) {
		// 			if (value > arr.size()/2)
		// 				return key;
		// 		} return - 1;
		
		int candidate = -1;
		int count = 0;
		
		for (int x : arr) {
			if (count == 0)
				candidate = x;
			
			if (x == candidate)
				count++;
			else
				count--;
		}
		
		int fre = 0;
		
		for (int x : arr) {
			if (x == candidate)
				fre++;
		}
		
		return (fre > arr.size() / 2) ? candidate : -1;
	}
};

