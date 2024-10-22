// _______find and find_first_of _________


// __________String Concatination using +_____________

#include<iostream>
#include<string>
using namespace std;

int main (){

    string s = "str abc abc abc"; 
    // int found = s.find("abc");  // 4 -> found at 4 index
    int found = s.find("abc", 5);

    cout << "Found at: " << found; // return the index
    // ___________________________if doesnot find then the return ==>> -1
}

