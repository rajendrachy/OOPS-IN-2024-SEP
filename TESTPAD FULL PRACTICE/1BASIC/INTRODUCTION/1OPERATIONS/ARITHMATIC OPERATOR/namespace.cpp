// ___________Name Space________________

// A namespace is a collection for identifiers under the same naming scope. (It is known as package in UML and Java.) 
//  :: (known as scope resolution operator), in the form of namespace::entityName.
// A namespace can contain variables, functions, arrays, and compound types such as classes and structures.

// all the standard C++ library components are packaged inside a namespace called std.


// _________Scope Resolution Operator______________
// The symbol :: is known as scope resolution operator. If a global variable is hidden by a local variable of the same 
// name (of course not recommended), you could use the scope resolution operator to retrieve the hidden global variable.
//  For example,
// _________________________________---------------------_______________---------------------

// #include <iostream>
// using namespace std;

// // Global variable
// int x = 5;

// int main() {
//   // A local variable having the Same name as a global variable,
//   // which hides the global variable
//   float x = 55.5f;

//   // Local
//   cout << x << endl;

//   // Use unary scope resolution operator to retrieve the global variable
//   cout << ::x << endl;

//   return 0;
// }


