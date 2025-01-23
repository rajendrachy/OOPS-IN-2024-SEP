// Single Inheritance -> One Base class & One derived class


#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "This is the Parent class." << endl;
    }
};


class Child : public Parent {
public:
    void show() {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child obj;
    obj.display();  // Accessing Parent class function
    obj.show();     // Accessing Child class function
    return 0;
}
