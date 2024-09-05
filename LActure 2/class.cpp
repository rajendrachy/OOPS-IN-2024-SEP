#include<iostream>
using namespace std;

class student {
    private:
    int id;
    public:
    string name;

     public:
    void insert (int i, string n) {
     id = i;
    name = n;
    }


    void display() {
        cout << id << ", " << name << endl;
    }
};



int main () {

    student s1;
    // s1.id = 101;
    s1.name = "Rajendra";

    s1.insert(101, "Rajendra");
    s1.display();


    student s2;
    s2.insert(102, "Raj");
    s2.display();
    return 0;
}