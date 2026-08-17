/**
 * Problem Link : https://leetcode.com/problems/find-users-with-valid-e-mails/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT *
FROM Users
WHERE mail REGEXP '^[A-Za-z][A-Za-z0-9_.-]*@leetcode\\.com$';
