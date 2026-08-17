/**
 * Problem Link : https://leetcode.com/problems/students-and-examinations/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below

SELECT s.student_id,s.student_name,sub.subject_name,count(e.subject_name) as attended_exams
FROM Students s
CROSS JOIN Subjects sub
LEFT JOIN Examinations e
ON e.student_id=s.student_id
and sub.subject_name = e.subject_name
GROUP BY s.student_id,s.student_name,sub.subject_name
order by s.student_id ,sub.subject_name;
