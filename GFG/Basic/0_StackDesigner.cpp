/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/stack-designer/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/* _push function to insert elements of array to
   stack
*/
class Solution {
    public:

    stack<int> push(vector<int> &arr) {
        // return a stack with all elements of arr inserted in it
        
        
        std::stack<int> s;
        for(int x : arr) s.push(x);
        return s;
        
    }

    /* _pop function to print elements of the stack
       remove as well
    */
    void pop(stack<int> s) {
        // print top and pop for each element until it becomes empty
        
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
    }
};
