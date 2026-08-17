/**
 * Problem Link : https://leetcode.com/problems/article-views-i/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select distinct author_id as id
from Views
where author_id=viewer_id 
order by id asc;

