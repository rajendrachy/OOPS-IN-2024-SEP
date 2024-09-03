#include <iostream>
using namespace std;

class student {

public:
    int id;
    string name;

    // Parameterized constructor
    student(int i, string n) {
        id = i;
        name = n;
        //cout << id << " " << name << endl; // Added space for readability
    }

    // Copy constructor
    student(const student &s) {
        id = s.id;
        name = s.name;
        cout << "Copy constructor called: " << id << " " << name << endl;
    }

    // Destructor
    ~student() {
        cout << "Destructor called for: " << id << ", " << name << endl;
    }

    // Method to display student details
    void display() {
        cout << id << " " << name << endl;
    }
};

// By default class creation:
// 1. Default constructor (not shown here, but implicitly created if no constructors are defined)
// 2. Copy constructor (default version used here)
// 3. Destructor (default version used here)

int main() {
    student s1(101, "Rajendra"); // Calls parameterized constructor
    student s2(s1);  // Calls copy constructor

    s1.display(); // Displaying s1 details
    s2.display(); // Displaying s2 details

    // By default, the constructors are created when we make a class object.

    return 0;
}
