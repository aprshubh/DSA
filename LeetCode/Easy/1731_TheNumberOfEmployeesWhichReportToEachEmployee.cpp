/**
 * Problem Link : https://leetcode.com/problems/the-number-of-employees-which-report-to-each-employee/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

SELECT 
    e.employee_id,
    e.name,
    COUNT(ee.employee_id) AS reports_count,
    ROUND(AVG(ee.age), 0) AS average_age
FROM Employees e
JOIN Employees ee
    ON ee.reports_to = e.employee_id
GROUP BY e.employee_id, e.name
ORDER BY e.employee_id;

