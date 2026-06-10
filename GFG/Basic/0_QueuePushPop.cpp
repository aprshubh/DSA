/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/queue-designer/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    queue<int> fillQ(const vector<int>& arr) {
        // code here
        queue<int> q;
        for(int x : arr) q.push(x);
        return q;
    }

    void emptyQ(queue<int>& q) {
        
        // code here
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
            
        }cout<<endl;
    }
};
