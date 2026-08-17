/**
 * Problem Link : https://leetcode.com/problems/number-of-unique-subjects-taught-by-each-teacher/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select teacher_id , count(distinct subject_id) as cnt
from teacher
group by teacher_id;

