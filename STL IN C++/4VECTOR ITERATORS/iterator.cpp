// * -> dereference operator

// Vector Iterators :-

// 1. vec.begin -> point to first element in the array list
// 2. vec.end -> Not point the n-1 element -> point to the garbage value 

// vec.end -> while dereferencing , garbage value will print




#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> vec = {1, 2, 3, 4, 5}; 

   cout << "vec.begin : " << *(vec.begin()) << endl;  // dereferencing
   cout << "vec.end : " << *(vec.end()) << endl;  //  dereferencing
    return 0;
}





// 3. rbegin() -> reverse begin
// 4. rend() -> reverse end


