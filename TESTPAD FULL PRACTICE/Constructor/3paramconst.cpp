#include<iostream>
#include<string>
using namespace std;
class Teacher {
    private:
    double salary;



    public:
    //Parameterized constructor
    Teacher(string name, string department, string salary, double sal) {
        this->dept = department; //this means object dept and in the right side this is a function parameter

        this->name = name;
        this->subject = salary;
        this->salary = sal;
        

        // this ----->>> to access the object property, it is automatic creating pointer
        // *ptr --->> dereferencing operator
    }

    string name;
    string dept;
    string subject;


    void changeDep (string newDept) {
        dept = newDept;
    }

    //setter
    void setSalary(double s) {
        salary = s;
    }

    double getSalary() {
        return salary;
    }

    void getInfo() {
        cout << "name : "  << name << endl;
        cout << "subject : " << subject << endl;
        cout << "Dept : " << dept << endl;
    }

};


int main () {
Teacher t1("Rajendra", "cse", "c++", 250000); // Constructor call
t1.getInfo();
return 0;
}


