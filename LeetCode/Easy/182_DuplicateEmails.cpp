/**
 * Problem Link : https://leetcode.com/problems/duplicate-emails/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select email
from person
group by email
having count(email)>1;

