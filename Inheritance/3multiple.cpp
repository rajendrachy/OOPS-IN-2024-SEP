#include <iostream>
using namespace std;


class Parent1 {
public:
    void display() {
        cout << "This is Parent1 class." << endl;
    }
};



class Parent2 {
public:
    void show() {
        cout << "This is Parent2 class." << endl;
    }
};


class Child : public Parent1, public Parent2 {
public:
    void print() {
        cout << "This is the Child class." << endl;
    }
};



int main() {
    Child obj;
    obj.display();  // Accessing Parent1 class function
    obj.show();     // Accessing Parent2 class function
    obj.print();    // Accessing Child class function
    return 0;
}


