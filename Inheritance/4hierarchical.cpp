#include <iostream>
using namespace std;
// Hierarchial -> only one parent class and multiple child classes 

class Parent {
public:
    void display() {
        cout << "This is the Parent class." << endl;
    }
};

class Child1 : public Parent {
public:
    void show() {
        cout << "This is the Child1 class." << endl;
    }
};

class Child2 : public Parent {
public:
    void print() {
        cout << "This is the Child2 class." << endl;
    }

};

int main() {

    Child1 obj1;
    Child2 obj2;

    obj1.display();  // Accessing Parent class function
    obj1.show();     // Accessing Child1 class function

    obj2.display();  // Accessing Parent class function
    obj2.print();    // Accessing Child2 class function

    return 0;
}
