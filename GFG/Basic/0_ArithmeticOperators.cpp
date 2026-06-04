/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/arithmetic-operators-1605594922/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin>> x>> y;
	
	// codp = x + y, Addition
	int p = x + y;
	int q = x - y;
	int r = x * y;
	int s = x / y;
	int t = x % y;
	
	// The below code prints the output
	cout << p << " " << q << " " << r << " " << s << " " << t << endl;
	return 0;
}

