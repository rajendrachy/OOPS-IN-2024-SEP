#include<iostream>
using namespace std;
class A { // we cannot make the object of the class A 

public:
virtual void show () = 0; // void -> return type , we cannot make the body of this function

void display() {
    cout << "Hi I am base class" <<endl;
}
};


class B : public A { // B can access all the function of the base class A except the pure virtul class

 public:
 void show (){
    cout << "Hi I am derived class"<<endl;
 }
};

int main() {
    A *p; 
     B ob;
    p = &ob;
    p->show();
    p->display();

    // ob.display();
    // ob.show();
    return 0;
}


