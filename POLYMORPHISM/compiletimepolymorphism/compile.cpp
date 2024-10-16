// ___________Compile Time Polymorphism_______________
// function overloading -> Function overloading is a programming feature that enables the creation of multiple functions with the same name but different parameters,
#include<iostream>
using namespace std;
//function
void show(int age) {
  cout << age << endl;
}

void show(string name) {
    cout << name << endl;
}

void show(double salary) {
    cout << salary << endl;
}
int main() {
    show (12);
    show("Rajendra");
    show(4.5); // 4.0 -> 4 output
    return 0;
}

