/**
 * Problem Link : https://leetcode.com/problems/not-boring-movies/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

SELECT *
FROM Cinema
WHERE id % 2 != 0
  AND description != 'boring'
ORDER BY rating DESC;

