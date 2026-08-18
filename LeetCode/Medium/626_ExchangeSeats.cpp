/**
 * Problem Link : https://leetcode.com/problems/exchange-seats/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT
    CASE
        WHEN id % 2 = 1 AND id + 1 <= (SELECT MAX(id) FROM Seat)
            THEN id + 1
        WHEN id % 2 = 0
            THEN id - 1
        ELSE id
    END AS id,
    student
FROM Seat
ORDER BY id;
