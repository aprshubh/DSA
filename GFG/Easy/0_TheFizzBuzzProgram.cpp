/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/the-fizzbuzz-program/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	void fizzBuzz(int number) {
		if (number%15 == 0)
			cout << "FizzBuzz"<<endl;
		else if (number%3 == 0)
			cout << "Fizz"<<endl;
		else if (number%5 == 0)
			cout << "Buzz"<<endl;
		else
			cout << number<<endl;
	}
};

