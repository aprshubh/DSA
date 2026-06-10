/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/queue-designer--104629/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

// User function Template for C++

queue<int> _push(vector<int> &arr) {
    // return a queue with all elements of arr inserted in it
    queue<int> q;
    
    for(int x : arr) 
        q.push(x);
        
    return q;
}

void _pop(queue<int> &q) {
    // print front and dequeue for each element until it becomes empty
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
