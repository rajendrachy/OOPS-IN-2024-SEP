// ___________class Destructors________
// A destructor is used to destroy the object and release the memory. Destructors take no arguments. 

// Destruction of objects takes place when the object leaves its scope of definition or is 
// explicitly destroyed. 



// They also use the name prefixed by a tilde (~) of the defining class. For example:

#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

class Circle
{
  private:
  double radius;
  public:
  Circle ( ) // Constructor with no argument
  {
    radius=0;
  }
  Circle (double r) // Constructor with one argument
  {
    radius = r;
  }
  ~ Circle ( ) // Destructor
  {
    cout<<"\n object is being destroyed.";
  }
  double showArea() // Member function
  {
    return radius*radius*3.1416;
  }
};




int main( )
{
  Circle c1, c2(3.5);
  cout<<"Area = "<<c2.showArea()<<endl;
  return 0;
}




// ------------Some important characteristics are summarized as follows:--------------------
// Destructor has the same name as that of the class it belongs to and preceded by ~ (tilde).
// Like constructors, the destructors do not have return type and not even void.
// Destructors can be virtual.
// The destructors do not have any arguments.
// The destructors cannot have default values.
// They cannot be overloaded.
// They cannot be inherited. However a derived class can call the base class destructor.






// 1.) Destuctors can be private in C++ -> True
// 2.) There can be more than one destructors in a class -> False
// 3.) Destructors can be virtual in C++ -> True
// 4.) If a class have 4 constructors then it must have 4 destructors also.


// Which of the following can be used with destructors: - (State Yes / No)
// 1.)
// Abstract
// No

// 2.)
// virtual
// Yes

// 3.)
// void
// No

// 4.)
// static

