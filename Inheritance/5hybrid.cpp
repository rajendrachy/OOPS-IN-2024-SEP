#include <iostream>
using namespace std;

class Grandparent {
public:
    void display() {
        cout << "This is the Grandparent class." << endl;
    }
};

class Parent1 : public Grandparent {
public:
    void show() {
        cout << "This is Parent1 class." << endl;
    }
};


class Parent2 {
public:
    void print() {
        cout << "This is Parent2 class." << endl;
    }
};

class Child : public Parent1, public Parent2 {
public:
    void speak() {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child obj;
    obj.display();  // Accessing Grandparent class function from Parent1
    obj.show();     // Accessing Parent1 class function
    obj.print();    // Accessing Parent2 class function
    obj.speak();    // Accessing Child class function

    return 0;
}


