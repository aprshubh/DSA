/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	vector<int> findUnion(vector<int> &a, vector<int> &b) {
		vector<int> arr;
		int i = 0;
		int j = 0;
		int n = a.size();
		int m = b.size();
		
		while (i < n && j < m) {
			if (a[i] == b[j]) {
				if (arr.empty() || arr.back() != a[i]) {
					arr.push_back(a[i]);
				}
				i++;
				j++;
			}
			else if (a[i] > b[j]) {
				if (arr.empty() || arr.back() != b[j]) {
					arr.push_back(b[j]);
				}
				j++;
			}
			else {
				if (arr.empty() || arr.back() != a[i]) {
					arr.push_back(a[i]);
				}
				i++;
			}
		}
		
		while (i < n) {
			if (arr.empty() || arr.back() != a[i]) {
				arr.push_back(a[i]);
			}
			i++;
		}
		
		while (j < m) {
			if (arr.empty() || arr.back() != b[j]) {
				arr.push_back(b[j]);
			}
			j++;
		}
		
		return arr;
	}
};

