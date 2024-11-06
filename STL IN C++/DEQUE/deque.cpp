// Deque => Double Endes Queue
// Dequeue -> POP the element  + differ then DEQUE 

// List ->  DDl -> list[2] not Valid
// Deque -> Dynamic Arrays -> d[2] is Valid


#include<iostream>
#include<vector>
#include<list>
#include<deque>

using namespace std;

int main() {

    deque<int> d = {1, 2, 3, 4, 5}; 

    
    for(int val : d) {
        cout << val << " ";
    }
    cout << endl;

    cout <<"The value at idx 2 is :  " <<  d[2] << endl; // in List this is not allowed

    return 0;
}




