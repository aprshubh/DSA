/**
 * Problem Link : https://leetcode.com/problems/average-time-of-process-per-machine/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select a1.machine_id,
round(avg(a2.timestamp-a1.timestamp),3) as processing_time
from activity a1 
join activity a2
on a1.machine_id=a2.machine_id
and a1.process_id=a2.process_id
AND a1.activity_type = 'start'
    AND a2.activity_type = 'end'
GROUP BY a1.machine_id;
