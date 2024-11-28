#include<iostream>
#include<string>
using namespace std;
class Teacher {
    private:
    double salary;
    public:
    Teacher() {
        cout <<"Hi, i am a constructor\n";
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

};

int main () {
Teacher t1; //constructor call
t1.name = "Rajendra";
t1.subject = "C++";
t1.dept = "CSE";
t1.setSalary(25000);

cout << t1.name <<endl;
cout << t1.getSalary() << endl;
return 0;
}
