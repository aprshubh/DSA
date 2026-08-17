/**
 * Problem Link : https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select e.name ,eu.unique_id
from Employees e
left join EmployeeUNI eu
on e.id=eu.id


