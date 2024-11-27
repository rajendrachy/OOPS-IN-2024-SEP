// _________________Functions_______________________________
//At times, a certain portion of codes has to be used many times. Instead of re-writing the codes many times

//The benefits of using functions are:-------------------
// 1. Divide and conquer
// 2. Avoid repeating codes
// 3. Software Reuse



// // Function Prototype (Function Declaration)
// ---->>>> double getArea(double radius);




// The syntax for function definition is as follows:

// returnValueType functionName ( parameterList )
// {
//   functionBody ;
// }


// a. The parameterList consists of comma-separated parameter-type and parameter-name, 
// i.e., param-1-type param-1-name, param-2-type param-2-name,...
// b. The returnValueType specifies the type of the return value, such as int or double.
// An special return type called void (void -> denote function return no value)

// [C++ does not allow you to return an array!]



// ______________________Function Naming Convention_________________________
// The first word is in lowercase, while the rest are initial-capitalized (known as camel-case). For example, getArea(), 





// __________________Function Prototype_____________________
// Function prototype - placed before the function is used.
// double getArea(double); // without the parameter name
// int max(int, int);



// You could optionally include the parameter names in the function prototype. The names will be ignored by the compiler,
// Function Prototype
// double getArea(double radius); // parameter names are ignored, but serve as documentation
// int max(int number1, int number2);




// ______________________The "void" Return Type________________
// Suppose that you need a function to perform certain actions (e.g., printing) without a need to return a value to the caller, you can declare its return-value type as void. 





// ________________________Actual Parameters vs. Formal Parameters_________________________
// #include <iostream>

// using namespace std;

// const int PI = 3.14159265;

// // Function Prototype (Function Declaration)
// double getArea(double radius);

// int main() {
//   double radius1 = 1.1, area1, area2;

//   area1 = getArea(radius1);		// call function getArea()
//   cout << "area 1 is " << area1 << endl;

//   area2 = getArea(2.2);		// call function getArea()
//   cout << "area 2 is " << area2 << endl;

//   cout << "area 3 is " << getArea(3.3) << endl;		// call function getArea()
//   return 0;
// }

// // Function Definition
// // Return the area of a circle given its radius
// double getArea(double radius) 
// {
//   return radius * radius * PI;
// }

// 1.________________ Actual Parameter (or, arguments)_________________
// -->>  When the function is invoked by a caller, the caller must supply so-called actual parameters (or arguments),
// -->> "area1 = getArea(radius1)", radius1 is the actual parameter, with a value of 1.1.


//2. _____________Formal Parameter_______________
// -->> In the above example, the variable (double radius) declared in the signature of getArea(double radius) is known as formal parameter. Its scope is within the function's body


// 
// #include <iostream>
// using namespace std;

// // Formal parameter: 'a' is defined in the function definition
// void display(int a) { // Parameters
//     cout << "Value: " << a << endl;
// }

// int main() {
//     int x = 10;

//     // Actual parameter: 'x' is passed to the function
//     display(x); // Arguments

//     return 0;
// }






// ___________________________Scope of Function's Local Variables and Parameters_______________________________

// All variables, including function's parameters, declared inside a function are available only to the function
// They are called local variables because they are local to the function and not available outside the function.
//They are also called automatic variables, because they are created and destroyed automatically 
// They are created when the function is called




// __________________________Default Arguments_____________________
// #include <iostream>
// using namespace std;

// // Function prototype - Specify the default arguments here
// int fun1(int = 1, int = 2, int = 3);
// int fun2(int, int, int = 3);

// int main() {
//   cout << fun1(4, 5, 6) << endl; // No default
//   cout << fun1(4, 5) << endl;    // 4, 5, 3(default)
//   cout << fun1(4) << endl;       // 4, 2(default), 3(default)
//   cout << fun1() << endl;        // 1(default), 2(default), 3(default)

//   cout << fun2(4, 5, 6) << endl; // No default
//   cout << fun2(4, 5) << endl;    // 4, 5, 3(default)
//   // cout << fun2(4) << endl;
//   // error: too few arguments to function 'int fun2(int, int, int)'
// }

// int fun1(int n1, int n2, int n3) {
//   // cannot repeat default arguments in function definition
//   return n1 + n2 + n3;
// }

// int fun2(int n1, int n2, int n3) {
//   return n1 + n2 + n3;
// }

