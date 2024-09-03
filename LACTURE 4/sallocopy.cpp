#include<iostream>
using namespace std;


class student {
int id;
char *name; //dynamic pointer

public:
student (int i, char *n) { //parameterized constructor
id = i;
name = n;

}


void display () {
    cout << id << " " << name << endl;
}
};



int main () {

  char name [] = "Rajendra";
  student s1(101, name);


  s1.display(); 


  name[3] = '3';
  student s2 (102, name);
  s2.display();

  s1.display();

    return 0;
}