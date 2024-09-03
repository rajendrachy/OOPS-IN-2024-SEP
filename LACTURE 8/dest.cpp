#include<iostream>
using namespace std;

class student  {
    public:
    int id;
    string name;


    //constructor 
    student () {
      cout << "COnstructor is called " << endl;
    }

    ~student() {
        cout << "Destructor is called :" << endl;
    }

    void set (int id, string name) {
        this->id = id;
        this->name = name;
    }

    void display () {
        cout << id << " " << name << endl;
    }
};


int main () {
   student s1;
   s1.set(101, "Rajendra");
   student s2;
   s2.set(102, "True");


   s1.display(); // 2
   s2.display(); // 2

   // 3 time Destructor

    return 0;
}