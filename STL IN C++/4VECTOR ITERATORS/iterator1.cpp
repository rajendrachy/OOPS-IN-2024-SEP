// #include<iostream>
// #include<vector>

// using namespace std;
// vector<int> :: iterator it => We can write auto in the place of this 

// ___________Forward Iterators____________

// int main () {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     vector<int>::iterator it;
    

// // or use auto under the for loop
    
//     for( it = vec.begin(); it != vec.end(); it++) {
//         cout << *(it) << " "; // * => Dereferencing
//     }
//     cout << endl;
//     return 0;
// }







// ______________Reverse Iterator_______________________
// #include<iostream>
// #include<vector>

// using namespace std;
// int main () {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     vector<int>::reverse_iterator it;
    
//     for(it = vec.rbegin(); it != vec.rend(); it++) {
//         cout << *(it) << " ";
//     }
//     cout << endl;
//     return 0;
// }








// ______________Reverse Iterator using a AUTO_______________________

// #include<iostream>
// #include<vector>

// using namespace std;

// int main () {
//     vector<int> vec = {1, 2, 3, 4, 5};

    
//     for(auto it = vec.rbegin(); it != vec.rend(); it++) {
//         cout << *(it) << " ";
//     }
//     cout << endl;
//     return 0;
// }


