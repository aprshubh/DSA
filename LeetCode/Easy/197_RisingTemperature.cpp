/**
 * Problem Link : https://leetcode.com/problems/rising-temperature/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select w1.id
from Weather w1
join Weather w2
on datediff(w1.recordDate,w2.recordDate)=1
where w1.temperature>w2.temperature;

