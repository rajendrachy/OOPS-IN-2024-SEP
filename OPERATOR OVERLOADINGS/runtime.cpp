//_________Run Time polymorphism_____________
// run time polymorphism is also implement throught  a class and Objects
// in this we should override the function

// ______This is the example of the function override in the c++ _____________
// function override -> same name function with a same parameter (____)

#include<iostream>
using namespace std;

class A {
 public:
 virtual void display() {
    cout << "It's a class A" << endl;
 }
};


class B : public A {
    public:
    void display () override{
    cout << "It's a class B" << endl;

 }
};

int  main() {

//    B obj;
// //    obj.display(); // call B
//    obj.A::display(); // call A
//     return 0;

A *ptr;
B obj;
ptr = &obj;
ptr->display(); // call A. to call the B use VIRTUAL in the class A function

return 0;

}


