//1. can we create a virtual constructor ?
// ans-> virtual constructor creation is not possible
// constructor doesnot be a static
// 2. can we create a virtual distructor ? 
// ans-> possible in the below example ->
//virtual distructor is avoid a memory leaks i.e pointer or objects handles to files , databese



#include<iostream>
using namespace std;

class Base {
    public:

    Base () {
        cout << "Base constructor called\n";
    }

    virtual ~Base() {
        cout << "Base distructor is called\n";
    }

};



class Derived1 : public Base {
    public:
    Derived1 () {
        cout << "Derived constructor called\n";
    }

    ~Derived1() { // it is also a virtual
        cout << "Derived destructor called\n";
    }
};


int main() {
    Base *b = new Derived1(); // it is in the heap 
    delete b; // delete in the heap where the pointer *b points in the heap
    return 0;
}




