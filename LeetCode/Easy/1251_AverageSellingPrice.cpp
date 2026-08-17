/**
 * Problem Link : https://leetcode.com/problems/average-selling-price/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select p.product_id , round(SUM(p.price * u.units) / SUM(u.units),2) as average_price
from prices p
join unitsSold u
on p.product_id=u.product_id 
and u.purchase_date>=p.start_date
and u.purchase_date<=p.end_date
group by p.product_id;

