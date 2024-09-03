#include<iostream>
using namespace std;


//this keyword

class student {

private:

int id;
string name;

public:

//constructor is always public
//parameterized constructor


// --->>>>student(int i, string n)  --->>> this->>>> keyword is applicable in this condition also


student (int id, string name) { // parameter name and class member name is same so we use this keyword --->>>>

      // .....................give a garbage value..................

    //id = id; //data member
    //name = name;// data member
    


    this->id = id; //data member
    this->name = name;// data member
}


void display() {
    cout << " " << id  << " " << name << endl;
}

void set (int id) {
    this->id = id;
}

};


int main () {

    student s1 (101, "Rajendra");
    student s2 (102, "True");

    s1.display();
    s2.display();


    s1.set(200);
    s2.set(201);

    s1.display();
    s2.display();

    return 0;
}