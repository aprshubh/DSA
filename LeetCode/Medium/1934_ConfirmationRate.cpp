/**
 * Problem Link : https://leetcode.com/problems/confirmation-rate/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below

select s.user_id,round(avg(case when c.action='confirmed' then 1 else 0 end),3) as confirmation_rate
from signups s
left join confirmations c
on s.user_id=c.user_id
group by s.user_id;

