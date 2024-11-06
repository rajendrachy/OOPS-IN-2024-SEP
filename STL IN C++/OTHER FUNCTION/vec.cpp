// Time complexicity -> O(n)

// vector
// 1. erase -> change the size but the capacity will be same or Not Change
// 2. insert
// 3. clear -> change the size(empty) but the capacity will be same or Not Change 
// 4. empty -> output 0 for false and 1 for true


// 1. __________________Erase________________

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {

//     vector<int> vec = {1, 2, 3, 4, 5}; 
//     // vec.erase(vec.begin()); //index 0 ->  1 erase
//     vec.erase(vec.begin() +2); // index 2 -> 3 erase

    
//     for(int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }




// __________Erase in the range___________

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {

//     vector<int> vec = {1, 2, 3, 4, 5}; 
    
//     vec.erase(vec.begin() +1, vec.begin() +3); // index 1 to 2 erase 3 index not include
    
//     for(int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }







//2. _____________INSERT_____________________

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {

//     vector<int> vec = {1, 2, 3, 4, 5}; 
    
//      vec.insert(vec.begin() +2, 100);  // ->  (position , value) insert in Index 2

//     for(int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }




// 3.____________CLEAR___________________


// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {

//     vector<int> vec = {1, 2, 3, 4, 5}; 
    
//     vec.clear(); // empty the array
//     for(int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;



//    cout << "Size : " << vec.size() << endl;
//    cout<< "Capacity : " << vec.capacity() << endl;
//     return 0;
// }




// 4. _______________EMPTY__________________

#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> vec = {1, 2, 3, 4, 5}; 
    
    vec.clear(); // empty the array
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;



   cout << "IsEmpty : " << vec.empty() << endl; // 1 -> True , 0 -> False
    return 0;
}

