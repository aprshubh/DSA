/**
 * Problem Link : https://leetcode.com/problems/triangle-judgement/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT x, y, z,
       CASE
           WHEN x + y > z
            AND x + z > y
            AND y + z > x
           THEN 'Yes'
           ELSE 'No'
       END AS triangle
FROM Triangle;

