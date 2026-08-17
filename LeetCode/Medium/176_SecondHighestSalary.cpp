/**
 * Problem Link : https://leetcode.com/problems/second-highest-salary/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select MAX(salary) As SecondHighestSalary
from employee
where salary <(
    select MAX(salary)
    from employee
);
