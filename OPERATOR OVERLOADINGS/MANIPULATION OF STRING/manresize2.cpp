// 

// __________String Method resize_____________

#include<iostream>
#include<string>
#include<conio.h> 
using namespace std;

int main (){

   //some text
   //012345678

    string text = "Some text";
    // text.resize(7);
    
     text.resize(20, '!'); // last value is not include starting from index -> 0 (Zero) 
    cout << text << endl;

    cout << text.at(3); // Starting from index -> 0 (zero)
   
}


