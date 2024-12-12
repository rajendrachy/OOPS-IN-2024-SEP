// _____________________________CONSTRUCTOR_____________________
// When an object is created, the constructor is executed and member variables are initialized. 
// The destructor destroys the object.
// The destructor is executed at the end of the function when objects are of no use.
// The only difference is that destructor is preceded by ~ (tilde) operator.



// class Number
// {
// 	int m, n;
// 	public:
// 		Number (void); // Declaration of Constructor
// 		……………..
// };



// Number :: Number ( void ) // Definition of Constructor
// {
// 	m = 0;
// 	n = 0;
// }




// The constructors with arguments are called parameterized constructors. 
// The constructor without arguments is called as default constructor. 
// When a reference of an object is passed as an argument to the constructor 
// then it is called a copy constructor.


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
  Circle ( ) // Default Constructor
  {
    radius=0;
  }
  Circle (double r) // Parameterized Constructor
  {
    radius = r;
  }
  Circle (Circle &c2) // Copy Constructor
  {
    radius = c2.radius;
  }
  double showArea( ) // Member function
  {
    return radius*radius*3.1416;
  }
};

int main( )
{
  Circle c1, c2(3.5);
  Circle c3(c2);
  Circle c4 = c2;

  cout<< "Area = " << c2.showArea( ) <<endl;
  cout<< "Area = " << c3.showArea( ) <<endl;
  cout<< "Area = " << c4.showArea( ) <<endl;
  return 0;
}



// ________________Some Special Characteristics Of Constructors Are Summarized As Follows:___________________

// a. Constructor has the same name as that of the class it belongs to.
// b. The constructor is invoked automatically when the object is declared.
// c. Constructors have neither return type nor void.
// d. They should be declared in the public section of the class.
// e. Constructors cannot be virtual. ----------(different)-------------
// f. They cannot be inherited.-----------(same) -----------
// However, a derived class constructor can call the base class constructor.
// g. They can have default arguments like other functions.
// h. The constructors can also be defined as inline functions.
// i. The constructors can be overloaded.---------------(different)--------------
// j. The constructor without arguments is called as default constructor.
// k. A reference of an object can be passed to the constructor called a copy constructor.




// ------------Some important characteristics are summarized as follows:--------------------
// Destructor has the same name as that of the class it belongs to and preceded by ~ (tilde).
// Like constructors, the destructors do not have return type and not even void.
// Destructors can be virtual.
// The destructors do not have any arguments.
// The destructors cannot have default values.
// They cannot be overloaded.
// They cannot be inherited. However a derived class can call the base class destructor.






// __________________________________Default Constructor_______________________________________
// As earlier discussed, a constructor that accepts no arguments is called a default constructor.





// _____________________________Parameterized Constructor________________________________________________
//  It is achieved by passing arguments to the constructors when the objects are created.
// The constructors that can accept arguments are called parameterized constructors. 


// The arguments can be passed to the constructor functions in two ways:

// i. By calling the constructor implicitly.

// ii. By calling the constructor explicitly.


// __________________________Copy Constructor_____________________________________
// #include<iostream>
// #include<cstdio>
// #include<cmath>
// // Include headers as needed

// using namespace std;

// class IntegerSum
// {
//   int a, b;
//   public:
//   IntegerSum( int x, int y) // Parameterized Constructor
//   {
//     a= x;
//     b = y;
//   }
//   IntegerSum( IntegerSum &I) // Copy Constructor
//   {
//     a = I.a;
//     b = I.b;
//   }
//   int display ( )
//   {
//     return a + b;
//   }
// };

// int main ( )
// {
//   IntegerSum Sum1(10, 20);
//   IntegerSum Sum2(Sum1);
//   IntegerSum Sum3 = Sum1;
//   cout<<"Sum = "<< Sum1.display( )<<endl;
//   cout<<"Sum = "<< Sum2.display( )<<endl;
//   cout<<"Sum = "<< Sum3.display( )<<endl;
//   return 0;
// }


// 'this' pointer                                    
// Every object in C++ has access to its own address through an important pointer called this pointer. 

