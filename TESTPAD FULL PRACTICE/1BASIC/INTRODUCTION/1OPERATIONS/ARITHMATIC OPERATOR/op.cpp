// ____________Arithmetic Operators____________
// C++ supports the following arithmetic operators for numbers: short, int, long, long long, char 
// (treated as 8-bit signed integer), unsigned short, unsigned int, unsigned long, unsigned long long, 
// unsigned char, float, double and long double.


// *(Multiplication)	Multiply 2 numbers			var1*var2	10*3 // Outputs 30
// /(Division)		Divide 2 numbers			var1/var2	10/2 // Outputs 5
// %(Remainder or Modulus)	Get remainder of an integer division	var1%var2	10%3 // Outputs 1
// +(Addition)		Add 2 numbers				var1+var2	10+2 // Outputs 12
// -(Subtraction)		subtract 2 numbers			var1-var2	10-2 // Outputs 8




// _________________#include <iomanip>   // needed for formatting floating-point numbers______________________
// Print floating-points in fixed format with 1 decimal place
// cout << fixed << setprecision(1);  // need <iomanip>




// ______________Compound Assignment Operators________________
// Besides the usual simple assignment operator '=' described earlier, C++ also provides the so-called compound 
// assignment operators as listed:

// Operator 			Description
// = 			Assign the value of the LHS to the variable at the RHS
// += 			same as var = var + expr 
// -= 			same as var = var - expr 
// *= 			same as var = var * expr 
// /= 			same as var = var / expr 
// %= 			same as var = var % expr


// ______________Increment/Decrement Operators________________
// C++ supports these unary arithmetic operators: increment '++' and decrement '--'.


// Operator 			Description
// ++var1 			Pre-Increment, Increment var, then use the new value of var
// var1++ 			Post-Increment, Use the old value of var, then increment var 
// --var1 			Pre-Decrement, Decrement var, then use the new value of var
// var1-- 			Post-Decrement, Use the old value of var, then decrement var 



// _______________Relational and Logical Operators____________
// Operator		Description 
// == 			Equal to expr1 == expr2 
// != 			Not Equal to expr1 != expr2 
// > 			Greater than expr1 > expr2 
// >= 			Greater than or equal to 
// < 			Less than expr1 < expr2 
// <= 			Less than or equal to


// Operator	Description
// &&		Logical AND   expr1 && expr2
// ||		Logical OR   expr1 || expr2
// !		Logical NOT   !expr
// ^		Logical XOR


// _____________There are two kinds of type casting:_______________________

// Implicit type-conversion performed by the compiler automatically, and
// Explicit type-casting via an unary type-casting operator in the form of (new-type)operand or new-type(operand).


