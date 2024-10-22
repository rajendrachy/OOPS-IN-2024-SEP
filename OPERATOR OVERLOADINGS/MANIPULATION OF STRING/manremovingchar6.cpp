#include<iostream>
#include<string>

using namespace std;


string remove (string s) {
    string ns; // new String
   for(int i=0; i<s.length(); i++) {
    //abcabc
      if(s.at(i) != 'a') {
        ns += s.at(i);
      }
   }

   return ns;
}

int main () {
    string s;
    cout << "Enter a text";
    getline(cin, s);

    string ns = remove(s);
     cout << "New string is: " << ns << endl;
    return 0;
}

