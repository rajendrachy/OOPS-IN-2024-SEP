// List -> Doubly LinkedList 


#include<iostream>
#include<vector>
#include<list>


using namespace std;


// int main () {

//     list<int> l;

//     l.push_back(1); // or, emplace_back(); // result will be same
//     l.push_back(2);
//     l.push_front(3);
//     l.push_front(5);
    
//     // l.pop_back();
//     // l.pop_front();

//     for(int val : l) {
//         cout << val << " " ; // 5 3 1 2
//     }


//     cout << endl;

//     return 0;
// }







// ____________Initialize a List__________________


int main () {

    list<int> l = {1, 2, 3, 4, 5};

   
    for(int val : l) {
        cout << val << " " ; 
    }


    cout << endl;

    return 0;
}



