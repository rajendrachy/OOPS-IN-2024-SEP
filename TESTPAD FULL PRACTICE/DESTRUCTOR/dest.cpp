#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called!" << endl;
    }

    ~Demo() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Demo obj; // Constructor is called
    cout << "Inside main function." << endl;
    return 0; // Destructor is automatically called here
}




