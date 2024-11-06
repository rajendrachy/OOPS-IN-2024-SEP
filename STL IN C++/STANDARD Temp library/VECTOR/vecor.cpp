// STI -> STL stands for Standard Templete Library 

#include<iostream>
#include<vector>
// ________size() and capacity()_______________

using namespace std;

// int main() {

//     vector<int> vec;  // initially the size => Zero (0)
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);

//      cout << "The size is : " << vec.size() << endl; // 3 -> Total no of the element
//      cout << "Capacity : " << vec.capacity() << endl; // 4

//     return 0;
// }










// _________________ push_back() or emplace_back()_______________

// int main() {

//     vector<int> vec;  // initially the size => Zero (0)
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);
//     vec.emplace_back(6); // Similar to the --->>> push_back() 

//     for(int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }
 











// ___________pop_back()________________

//  int main() {

//     vector<int> vec;  // initially the size => Zero (0)
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);
//     vec.emplace_back(6); // Similar to the --->>> push_back() 


//     vec.pop_back(); // pop ot delete the last element

//     for(int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }





// __________at() or []_____________

// int main() {

//     vector<int> vec;  // initially the size => Zero (0)
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);
//     vec.emplace_back(6); // Similar to the --->>> push_back() 


//     vec.pop_back(); // pop ot delete the last element

//     for(int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;



//    cout << "Val at idx 2 : " << vec[2] << "  " << "or"  << " " << vec.at(2) << endl; // 3

//     return 0;
// }




// __________front() & back()_____________

int main() {

    vector<int> vec;  // initially the size => Zero (0)
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6); // Similar to the --->>> push_back() 


    vec.pop_back(); // pop ot delete the last element

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;



     cout << "front : " << vec.front() << endl;
     cout << "Back : " << vec.back() << endl;

    return 0;
}




// This all have time complexicity -> O(1)