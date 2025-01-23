#include <iostream>
using namespace std;

class Grandparent {
public:
    void display() {
        cout << "This is the Grandparent class." << endl;
    }
};


class Parent : public Grandparent {
public:
    void show() {
        cout << "This is the Parent class." << endl;
    }
};

class Child : public Parent {
public:
    void print() {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child obj;
    obj.display();  // Accessing Grandparent class function
    obj.show();     // Accessing Parent class function
    obj.print();    // Accessing Child class function
    return 0;
}

