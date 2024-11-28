// _______________________________Function Overloading_________________________________
// The same name can be used to create a number of functions that perform different tasks. 
// Defining multiple functions with the same name is known as function overloading or function polymorphism. 

// The overloaded functions must be different in number of arguments or types of arguments or order of arguments. 
// If two functions have the same number of arguments and same types then they cannot be overloaded.


#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int find_Area ( int , int );
float find_Area( double, double );
float find_Area( double );

int main( )
{
  int areaR;
  float areaT;
  float areaC;
  areaR = find_Area(5,15);
  areaT = find_Area(5.5,1.5);
  areaC = find_Area(5.3);
  cout<< "Area of rectangle is " << areaR<<endl;
  cout<< "Area of triangle is " << areaT<<endl;
  cout<< "Area of circle is " << areaC<<endl;
  return 0;
}
int find_Area(int len , int bh)
{
  return ( len * bh );
}
float find_Area(double bs , double ht)
{
  return (0.5 * bs * ht );
}
float find_Area( double r)
{
  return ( 3.142857 * r * r );
}

// Precautions for Function Overloading
// a) Function prototypes must be declared before main ( );
// b) Variable should be passed instead of passing constants directly. It will avoid ambiguity.


//_____________Example_____________________
// #include<iostream>
// using namespace std;

// void func(int x) {
//     cout << "int version" << endl;
// }

// void func(double x) {
//     cout << "double version" << endl;
// }

// int main() {
//     func(5);    // Ambiguous: Can be int or double version
//     return 0;
// }




