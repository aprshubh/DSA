/**
 * Problem Link : https://leetcode.com/problems/product-sales-analysis-i/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select p.product_name,s.year,s.price
from sales s
left join Product p
on s.product_id=p.product_id; 

