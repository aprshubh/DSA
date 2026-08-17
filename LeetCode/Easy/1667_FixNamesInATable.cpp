/**
 * Problem Link : https://leetcode.com/problems/fix-names-in-a-table/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select user_id,concat(upper(left(name,1)),lower(substring(name,2))) as name
from users
order by user_id;


