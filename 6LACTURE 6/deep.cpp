#include<iostream>
#include<string>
#include<bits/stdc++.h> // to create a deep copy and use a STRLEN in this.

using namespace std;


class student {

    int id;
    char *name;
    //string name;

    public:
    student (int id, char *name) {
        this->id = id;
        //this->name = name; //shallow copy 

        //Deep Copy

        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }


void display () {
    cout << id << " " << name << endl;
}
};

int main () {

    char name[] = "Rajendra";
    student s1(101, name); // Rajendra

  

   name[3] = '4';

   student s2(102, name); // Rajendra
    s1.display();


   s2.display(); // now the changes only reflect in S2 but not in S1

   s1.display(); //Right ans




    return 0;
}