#include<iostream>
#include<string>
using namespace std;


class student { // student is a class name
public:
    int id; // data member (Also instance variable);
    string name; // data member   (Also instance variable);


    void display() {
        cout <<"My id is: " << id <<endl <<"My name is : " << name << endl;
    }
};


int main () {

    student s1;
    s1.id = 101;
    s1.name = "Rajendra";
    s1.display();

    return 0;
}