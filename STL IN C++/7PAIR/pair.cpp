//Pair -> Pair are the part of css Utility Library


// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>

// using namespace std;


// int main() {

//     // pair<int, int> p = {1, 5};
//     // pair<string, int> p = {"Rajendra", 5};
//     pair<int, pair<char, int>> p = {1, {'a', 3}};
    
//     cout << p.first << endl; // Rajendra or 1
//     // cout << p.second<< endl; // 5 or 5
//     cout << p.second.first << endl; // a
//     cout << p.second.second<< endl; // 3
   
//     return 0;
// }








// __________________Vector of pair________________________

#include<iostream>
#include<vector>
#include<list>
#include<deque>

using namespace std;

int main () {
    vector<pair<int, int>> vec = {{1,2}, {2, 3}, {3,4}};

     vec.push_back({4, 5}); // make pair using a { } // insert end of the vector
     vec.emplace_back(4, 5); // automatically make a pair without using -> { }   // in-place object create

    for(auto p : vec) {
        
        cout << p.first << " " << p.second << " , " << endl;
    }
    cout << endl;
    
    return 0;
}



