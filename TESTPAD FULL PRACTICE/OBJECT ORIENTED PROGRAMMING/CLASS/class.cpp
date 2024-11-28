// _______________________Class__________________________________________

// A class can be visualized as a three- compartment box, as illustrated:

// i) Class name (or identifier): identifies the class.

// ii) Data Members or Variables (or attributes, states, fields): contains the static attributes of the class.

// iii) Member Functions (or methods, behaviors, operations): contains the dynamic operations of the class.



// Classes are created using the keyword class.
//  The declaration of a class is enclosed with curly braces and terminated by a semi-colon.
//  The member variables and functions are divided into two sections i.e. private and public. 
// The private and public keywords are terminated by colon (:).










// The following example illustrates the class Circle declaration.

// class Circle // class name
// {
// 	private:
// 	double radius; // data members ( or variables)
// 	public:
// 	double getRadius(); // member functions
// 	double showArea();
// };





// ___________________________Declaring Objects:_____________________________________________

                                    
// Declaring Objects:

// Defining objects of a class data type is known as class instantiation. When objects are created, 
//only during that moment memory is allocated to them. For examples, suppose that we have a class Circle. 

// We can create instances of Circle in the function main () as follows:

// Circle c1, c2, c3; // Construct 3 instances c1, c2, c3 of the class Circle






// __________________Accessing class members:__________________________

// The object can access the public member variables and functions of a class by using operator dot (.) 
//and the syntax is as follows:

// [Object name] [Operator][Member name];


// To access the member functions getRadius & showArea of class Circle, the statement would be,

// C1. getRadius();
// C1. showArea();


// Another method of accessing members of a class is using the arrow operator ‘ - >’ 
// and will be discussed later.



// ___________________Defining Member Functions______________________
// The member function must be declared inside the class. They can be defined inside or outside the class.


// ___________(i) Member Function inside the class_______________
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

class Circle
{
  private:
  double radius;
  public:
  double getRadius( ) // Member function (Setter)
  {
    radius=1.5;
  }
  double showArea() // Member function
  {
    return radius*radius*3.1416;
  }
};

int main( )
{
  Circle C1;
  C1. getRadius( );
  cout<<"area = "<<C1.showArea();
  return 0;
}





// ____________________(ii) Member function outside the class___________________
// To define a function outside the class the following steps must be taken:

// The prototype of function must be declared inside the class.

// #include<iostream>
// #include<cstdio>
// #include<cmath>

// using namespace std;

// class Circle
// {
//   private:
//   double radius;
//   public:
//   void getRadius( ) ; // Prototype declaration
//   double showArea( ) ; // Prototype declaration
// };

// void Circle :: getRadius()
// {
//   radius=1.5;
// }

// double Circle :: showArea ()
// {
//   return radius*radius*3.1416;
// }

// int main( )
// {
//   Circle c1;
//   c1. getRadius( );
//   cout<<"area = "<< c1.showArea();
//   return 0;
// }



// ________________OOPS-7__________________

// 1. Program consists of multiple modules and in turn, each module
// has set of functions of related type -> Modular
// 2. Program has flat physical structure consisting of only global 
// data and sequential code. -> Monolithic
// 3. Orgainzed around objects rather than "actions" and data rather 
// than logic -> Object-Oriented




