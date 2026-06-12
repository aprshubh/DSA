/**
 * Problem Link : https://leetcode.com/problems/count-indices-with-opposite-parity/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size()-1;
        int even = 0;
        int odd = 0;
        for(int i = n;i>=0;i--){
            if(nums[i]%2==0) nums[i]=even;
            else nums[i]=odd;
            (i%2==0) ? even++:odd++;
            
        }return nums;
    }
};
