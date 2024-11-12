// Multi map => [] = Square bracket (Not use)

// ____________________Multi Map________________________

// #include<iostream>
// #include<vector>
// #include<list>
// #include<stack>
// #include<queue>
// #include<map>
// using namespace std;



// int main () {

//     multimap<string, int> m;
    
//     m.emplace("tv", 100); // Key : Value
//     m.emplace("tv", 100); // Key : Value
//     m.emplace("tv", 100); // Key : Value
//     m.emplace("tv", 100); // Key : Value


// //   m.erase("tv");
// m.erase(m.find("tv")); //one erase

//   for(auto p : m) {
//     cout << p.first << " : " << p.second << endl; // all tv are print in the multimap but in the MAP only one tv will print

//   }

//   return 0;
// }







//________________Unordered Map_______________ In random Order____________

#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>

using namespace std;



int main () {

    unordered_map<string, int> m;
    
    // m.emplace("tv", 100); // Key : Value
    // m.emplace("tv", 100); // Key : Value
    // m.emplace("tv", 100); // Key : Value
    // m.emplace("tv", 100); // Key : Value


    m.emplace("tv", 100); // Key : Value
    m.emplace("freeze", 100); // Key : Value
    m.emplace("Ball", 100); // Key : Value
    m.emplace("Photo", 100); // Key : Value


//   m.erase("tv");
// m.erase(m.find("tv")); //one erase

  for(auto p : m) {
    cout << p.first << " : " << p.second << endl; // all tv are print in the multimap but in the MAP only one tv will print

  }

  return 0;
  
}



