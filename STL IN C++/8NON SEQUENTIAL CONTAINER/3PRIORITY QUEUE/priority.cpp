// PRIORITY QUEUE -> It uses Internally -> a. MaxHeap b.MinHeap
// MaxHeap and MinHeap are Complite Binary Tree (CBT)

// Priority Value -> It is by default largest Value
// push. emplace -> O(logn)
// top -> O(1) constant
// pop -> O(logn)


#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>

// Header is Not include for the priority_queue

using namespace std;



int main () {
    //priority_queue<int> q; // greater to smaller
    priority_queue<int, vector<int>, greater<int>> q;

    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);


   while(!q.empty()) {
    cout << q.top() << " "; // Print in the Shorted Order 
    q.pop();

   }

   cout << endl;

    return 0;
}


