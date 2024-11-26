// MAP -> Map usually like to Store key : value Pairs
// Create a Map -> map<string, int> m ; ==>> string -> Key type && int -> value type
// m[key] = value ==>>  Insert , change
// new key is not added in the m[key]



// find -> if Found -> return Iterator;
// find -> if Not Found -> return m.end();


#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>

using namespace std;


int main () {

  map<string, int> m; // map -> sort in the ascending order character (a, b, c, d......) // string -> Key,  and int -> value

  m["tv"] = 100;
  m["laptop"] = 100;
  m["headphones"] = 50;
  m["tablet"] = 120;
  m["watch"] = 50;

 m.insert({"camera", 25}); // with { }
 // m.emplace("camera", 25); // without { }

m.erase("tv"); // tv key and value is erase

  for(auto p : m) {
    cout << p.first<< " : " << p.second <<endl;  // print according to the ascending Order
  }



  //___________find_____________

  if(m.find("camera") != m.end()) {
    cout << "Found\n";
    
  } else {
    cout << "Not Found\n";
  }

  cout << "Count" << " : " << m.count("laptop") << endl; // Count how many laptop key exists
    return 0;
}




