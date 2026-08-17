/**
 * Problem Link : https://leetcode.com/problems/recyclable-and-low-fat-products/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT product_id
FROM Products
WHERE low_fats = 'Y'
  AND recyclable = 'Y';

