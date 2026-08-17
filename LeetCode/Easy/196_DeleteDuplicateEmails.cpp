/**
 * Problem Link : https://leetcode.com/problems/delete-duplicate-emails/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
delete p1 
from person p1
join person p2
on p1.email=p2.email
and p1.id>p2.id;

