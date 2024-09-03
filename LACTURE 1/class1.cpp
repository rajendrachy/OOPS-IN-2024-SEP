#include<iostream>
#include<string>

using namespace std;

class student {
public:
    int id; // data member
    string name; // data member

    void insert(int i, string n) { // creating a function
        id = i;
        name = n;
    }

    void display() { // function or method
        cout << id << " " << name << endl;
    }
};

int main() {
    student s1; // static obj
    student s2; // static obj
    student* s3 = new student; // dynamic obj

    int id;
    string name;

    // Input for student s1
    cout << "Enter ID and Name for student 1: ";
    cin >> id >> name;
    s1.insert(id, name);

    // Input for student s2
    cout << "Enter ID and Name for student 2: ";
    cin >> id >> name;
    s2.insert(id, name);

    // Input for student s3
    cout << "Enter ID and Name for student 3: ";
    cin >> id >> name;
    s3->insert(id, name);

    // Displaying the details
    s1.display();
    s2.display();
    s3->display();

    delete s3; // free the dynamically allocated memory

    return 0;
}
