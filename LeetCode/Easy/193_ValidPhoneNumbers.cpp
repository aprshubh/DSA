/**
 * Problem Link : https://leetcode.com/problems/valid-phone-numbers/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Read from the file file.txt and output all valid phone numbers to stdout.

grep -P '^(\d{3}-|\(\d{3}\) )\d{3}-\d{4}$' file.txt
