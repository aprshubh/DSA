/**
 * Problem Link : https://leetcode.com/problems/find-followers-count/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select user_id , count(*) as followers_count
from followers
group by user_id
order by user_id;
