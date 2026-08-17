/**
 * Problem Link : https://leetcode.com/problems/customer-who-visited-but-did-not-make-any-transactions/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select v.customer_id , count(*) as count_no_trans
from visits v
left join Transactions t 
on v.visit_id=t.visit_id
where t.transaction_id is NULL
group by v.customer_id;
