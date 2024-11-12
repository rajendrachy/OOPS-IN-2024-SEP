#include<iostream>
#include<string>

using namespace std;

class student {  //class creation
    public:
    int id; // data member
    string name; // date member

    void insert (int i, string n) { // creating a function
        id = i;
        name = n;
    }


    void display () { // function or method
        cout << id << " " << name;
    }

};


int main () {
    student s1; //static obj
    student s2; // static obj

    student *s3 = new student; // dynamic obj
     
     s1.insert(101, "Rajendra");
     s2.insert(102, "Rajendra");

    s3->insert(103, "True");

    // or,  (*s3).insert(104, "True");
     
     

     s1.display();
     s2.display();

     s3->display();
     // or, (*s3).display();

    return 0;
}