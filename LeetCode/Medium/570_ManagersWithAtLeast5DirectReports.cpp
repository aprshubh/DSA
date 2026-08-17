/**
 * Problem Link : https://leetcode.com/problems/managers-with-at-least-5-direct-reports/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

SELECT e1.name
FROM Employee e1
JOIN Employee e2
    ON e1.id = e2.managerId
GROUP BY e1.id, e1.name
HAVING COUNT(e2.id) >= 5;
