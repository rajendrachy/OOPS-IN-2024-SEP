// ___________Overloading of the Uranary operator in the c++____________________

#include<iostream>
using namespace std;


class A {

    private:
    int a, b, c;

    public:
    void readdata (int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void show() {
        cout << a << " " << b << " " << c << endl;
    }

    void operator -();  // operator defination

};



void A :: operator -() 
{

   a = -a;
   b = -b;
   c = -c;
};



int main() {
     
     A obj;
     obj.readdata(1, -2, 4);
     cout << "Before : ";
     obj.show();

     -obj;
     cout << "After : ";
     obj.show();

    return 0;

}




