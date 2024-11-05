// _______Run Time polymorphism_________
// function overriding -> same parameter function in the class
#include<iostream>
using namespace std;
class A {
    public:
    virtual void display() { // virtual -> ignore this due to the virtual keyword, this function is override
        cout << "It's a  class A" << endl;
    }
};

class B : public A {
    public:
     void display() {
        cout << "It's a  class B" << endl;
    }
};

int main () {
    // Simple
//    B obj;
//    obj.display();
//    obj.A::display();

// ______using a function overriding methods___

A *ptr;
B obj;
ptr = &obj;
ptr->display();
    return 0;
}