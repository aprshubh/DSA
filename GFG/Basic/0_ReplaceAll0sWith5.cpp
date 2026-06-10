/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/*you are required to complete this method*/
class Solution {
public:
    int convertFive(int n) {
        if (n == 0)
            return 5;

        int temp = 0;

        while (n > 0) {
            int dig = n % 10;
            if (dig == 0)
                dig = 5;

            temp = temp * 10 + dig;
            n /= 10;
        }

        int output = 0;

        while (temp > 0) {
            int dig = temp % 10;
            output = output * 10 + dig;
            temp /= 10;
        }

        return output;
    }
};
