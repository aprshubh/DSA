/**
 * Problem Link : https://leetcode.com/problems/find-customer-referee/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select name 
from Customer 
where referee_id!=2 or referee_id is NULL;

