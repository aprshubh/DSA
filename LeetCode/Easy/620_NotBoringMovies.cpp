/**
 * Problem Link : https://leetcode.com/problems/not-boring-movies/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select * from cinema 
where id%2!=0 and description!='boring '
order by id desc;

