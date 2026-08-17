/**
 * Problem Link : https://leetcode.com/problems/big-countries/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select name , population , area 
from World 
where area>=3000000 or population >=25000000;

