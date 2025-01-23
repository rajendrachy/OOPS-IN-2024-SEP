// When we made a obj of the derived class Student -> 
//first base class constructor is called i.e Person, then second the derived class constructor is called  i.e Student
// just vice versa in the distructor
// first the child class memory deallocate then the parentclass memory deallocate
#include<iostream> // time : 1 : 14 min : 45 sec
#include<string>
using namespace std;


class Person {
    public:
    string name;
    int age;

    // Person (string name, int age) {
    //     this->name = name;
    //     this->age = age;
    // }



    Person() { // simple constructor
      cout << "Parent constructor" << endl;
    }


    ~Person() {
        cout << "Parent destructor"<<endl;
    }
};

class Student : public Person {
    //name, age -> it is inherite from a Base to parent class -> Person


    public:
    int rollno;


  Student(string name, int age, int rollno) {
     this->name = name;
     this->age = age;
     this->rollno = rollno;
  }
    // Student () {
    //     cout << "Child constructor" << endl;
    // }

  ~Student() {
    cout << "Child destructor"<<endl;
  }

    void getInfo() {
       cout<<"name :"  <<name << endl;
       cout<<"age: " << age<< endl;
       cout<<"rollno : " << rollno << endl;

    }

};

int main () {
Student s1("Rajendra", 19, 2);
// s1.name = "rajendra chaudhary";
// s1.age = 19;
// s1.rollno = 2311981617;

 s1.getInfo();

    return 0;
}




