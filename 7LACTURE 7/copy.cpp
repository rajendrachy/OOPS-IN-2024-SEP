#include<iostream>
#include<string>
#include<bits/stdc++.h> // to create a deep copy and use a STRLEN in this.

using namespace std;


class student {

    int id;

    public:
    char *name;
    //string name;

    //create out own copy constructor

    student (student &s) {
        this->id = s.id;
        //this->name = s.name; //sallow copy

        //deep copy
        this->name = new  char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }

    //Parameterized constructor

    student (int id, char *name) {
        this->id = id;
        //this->name = name; //shallow copy 

        //Deep Copy  with a copy constructor

        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }


void display () {
    cout << id << " " << name << endl;
}
};

int main () {
     char name[] = "Rajendra";
    student s1(101, name);
    
    s1.display();

    student s2(s1); //default copy constructor made while made a object

    s2.name[3] = '4'; // private doesnot change directly

    s1.display(); // 
    s2.display();




//     char name[] = "Rajendra";
//     student s1(101, name); // Rajendra

  

//    name[3] = '4';

//    student s2(102, name); // Rajendra
//     s1.display();


//    s2.display(); // now the changes only reflect in S2 but not in S1

//    s1.display(); //Right ans




    return 0;
}