/**
 * Problem Link : https://leetcode.com/problems/product-sales-analysis-iii/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select product_id,min(year) as first_year,quantity,price
from sales
group by product_id ;
