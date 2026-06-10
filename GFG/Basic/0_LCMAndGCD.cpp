/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> lcmAndGcd(int a, int b) {

        int x = a, y = b;

        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }

        int gcd = a;
        int lcm = (x / gcd) * y;

        return {lcm, gcd};
    }
};
