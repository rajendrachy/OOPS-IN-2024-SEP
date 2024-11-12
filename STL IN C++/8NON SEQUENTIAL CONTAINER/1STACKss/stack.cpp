// STACK -> Last In First Out (LIFO)

#include<iostream>
#include<vector>
#include<list>
#include<stack>


using namespace std;

// int main () {

//     stack <int> s;

//     s.push(1);
//     s.push(2);
//     s.push(3);

//     while(!s.empty()) {
//         cout << s.top() << " ";
//          s.pop();
//     }

//    cout << endl;

//     return 0;
// }











// _____________STACK______________


int main () {

    stack <int> s;

    s.push(1);
    s.push(2);
    s.push(3);

stack <int> s2;
  
  s2.swap(s); // s vector is empty due to swap()


    // while(!s.empty()) {
    //     cout << s.top() << " ";
    //     s.pop();
    // }



    cout << "S size : " << s.size() << endl;
    cout << "S2 size : " << s2.size() << endl;

   cout << endl;

    return 0;
}

