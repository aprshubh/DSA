/**
 * Problem Link : https://leetcode.com/problems/nth-highest-salary/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    set n = n-1;
  RETURN (
      # Write your MySQL query statement below.
      select distinct salary
      from employee order by salary desc
      limit 1 offset n

  );
END
