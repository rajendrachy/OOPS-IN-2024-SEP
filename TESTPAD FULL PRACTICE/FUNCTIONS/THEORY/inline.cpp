// ______________________C++ : Inline Functions-1__________________________________

#include <iostream>
using namespace std;

inline int max(int n1, int n2) 
{
  return (n1 > n2) ? n1 : n2;
}

int main() 
{
  int i1 = 5, i2 = 6;
  cout << max(i1, i2) << endl;  // inline request to expand to (i1 > i2) ? i1 : i2
  return 0;
}

// The compiler may expand (or, increase in size) line 11 as:

// cout << (i1 > i2) ? i1 : i2 << endl;




// _________________Inline functions and Macros_________________

// #define SQUARE(x) x*x     // Macro with argument





// Command-Line Arguments                               
// You may include arguments in the command-line, when running a program, for example,

// $ gcc -o test test.cpp



// int operand1 = atoi(argv[1]); // Parse string to int
