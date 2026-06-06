/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/the-if-statement--113256/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n > 100)
        cout << "Big" << endl << "Number";
    else
        cout << "Number";

    return 0;
}
