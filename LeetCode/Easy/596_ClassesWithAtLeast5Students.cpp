/**
 * Problem Link : https://leetcode.com/problems/classes-with-at-least-5-students/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(*) >= 5;
