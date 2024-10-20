// ________Operator overloading___________

// -> it is a __Compile time polymorphism__

//-> Compile time polymorphism is implement through function overloading


#include<iostream>
using namespace std;


void display(int age) {  // example of the function overloading
  cout << age << endl;
}


void display(string name) {
    cout << name << endl;

}


void display(double salary) {
    cout << salary << endl;
}



int main() {
   display("Rajendra chaudhary");
   display(23);
   display(5.9);

   return 0;
}


