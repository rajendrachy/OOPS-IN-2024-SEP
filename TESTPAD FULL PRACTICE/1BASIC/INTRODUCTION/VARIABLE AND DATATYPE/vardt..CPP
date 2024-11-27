// ___________Variables & Data types________________

// ____________Variable______________
// A variable is used to store a piece of data for processing. It is called a variable because 
//you can change the value stored. 
// 1) A variable has a name (or identifier), e.g., radius, area, age, height.
//  (e.g., radius=1.2),

// 2) A variable has a type. Examples of type are,
// int: for integers (whole numbers) such as 123 and -456;
//double: for floating-point or real numbers such as 3.1416, -55.66, having a decimal point and fractional part.



// ___________________Identifiers_______________
// An identifier is needed to name a variable.
// An identifier is a sequence of characters, of up to a certain length (compiler-dependent, typically 255 characters), comprising 
// uppercase and lowercase letters (a-z, A-Z), digits (0-9), and underscore "_".
// White space (blank, tab, new-line) and other special characters (such as +, -, *, /, @, &, commas, etc.) are not allowed.
// An identifier must begin with a letter or underscore. It cannot begin with a digit. Identifiers beginning with an underscore are typically reserved for system use.
// An identifier cannot be a reserved keyword or a reserved literal (e.g.,int, double, if, else, for).
// Identifiers are case-sensitive. A rose is NOT a Rose and is NOT a ROSE.

//__________camel case______________
// For example, thefontSize, roomNumber, xMax, yMin, xTopLeft and thisIsAVeryLongVariableName. 
// This convention is also known as camel-case.



// _______________--Variable Declaration_______________
// Declare a variable of a specified type
// type identifier;
// Examples,

// a. int mark1;           // Declare an int variable called mark1
// b. mark1 = 76; 





// ______________Constants (const)________________-
// Constants are non-modifiable variables, declared with keyword const. Their values cannot be changed during program execution. 
// Also, const must be initialized during declaration. For examples:

// eg -> const double PI = 3.1415926;  // Need to initialize


//____________Expression__________________
// An expression is a combination of operators (such as addition '+', subtraction '-', multiplication '*', division '/') and operands (variables or literal values), that can be evaluated to yield a single value of a certain type. 



// _______________Fundamental Data Types___________
//a. Integers : C++ supports these integer types: char, short, int, long, long long (in C++11)
// b. Characters: Characters (e.g., 'a', 'Z', '0', '9') are encoded in ASCII into integers
// c. Floating-point Numbers: There are 3 floating point types: float, double and long double, for single, double and long double precision floating point numbers. 
// d. Boolean : A special type called bool (for boolean), which takes a value of either true or false.

// ____________Sizeof____________________
// C/C++ provides a unary sizeof operator to get the size of the operand (in bytes).


// ______________#include <climits>   // integer limits_________________
// #include <iostream>
// #include <climits>   // integer limits
// using namespace std;

// int main() {
//   cout << "int max = " << INT_MAX << endl;
//   cout << "int min = " << INT_MIN << endl;
//   cout << "unsigned int max = " << UINT_MAX << endl;
//   cout << "long long max = " << LLONG_MAX << endl;
//   cout << "long long min = " << LLONG_MIN << endl;
//   cout << "unsigned long long max = " << ULLONG_MAX << endl;
//   cout << "Bits in char = " << CHAR_BIT << endl;
//   cout << "char max = " << CHAR_MAX << endl;
//   cout << "char min = " << CHAR_MIN << endl;
//   cout << "signed char max = " << SCHAR_MAX << endl;
//   cout << "signed char min = " << SCHAR_MIN << endl;
//   cout << "unsigned char max = " << UCHAR_MAX << endl;
//   return 0;
// }


