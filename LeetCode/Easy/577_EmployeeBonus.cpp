/**
 * Problem Link : https://leetcode.com/problems/employee-bonus/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select e.name ,b.bonus
from employee e
left join bonus b
on e.empId=b.empId
where b.bonus<1000 or b.bonus is NULL;

