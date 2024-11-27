//___________________There are two ways that a parameter can be passed into a function: pass by value vs. pass by reference._____________
// 1. Pass by Value------------------------------
// #include <iostream>
// using namespace std;

// void modifyValue(int x) { // 'x' is a copy of the actual parameter
//     x = 20;              // Changing 'x' does not affect the original variable
// }

// int main() {
//     int num = 10;

//     cout << "Before function call: " << num << endl;
//     modifyValue(num); // Pass by value
//     cout << "After function call: " << num << endl;

//     return 0;
// }




// 2. Pass by value-------------------------------
// #include <iostream>
// using namespace std;

// void modifyValue(int &x) { // 'x' is a reference to the actual parameter
//     x = 20;               // Changing 'x' directly affects the original variable
// }

// int main() {
//     int num = 10;

//     cout << "Before function call: " << num << endl;
//     modifyValue(num); // Pass by reference
//     cout << "After function call: " << num << endl;

//     return 0;
// }






// ______________________Passing Array________________________-

// Array is passed into function by reference. Hence, changes of array inside the function is reflected outside the function (i.e., side effect).


// Why Arrays are Pass-by-Reference?

// Array is designed to be passed by reference, instead of by value using a cloned copy. 
// This is because passing huge array by value is inefficient - the huge array needs to be cloned(or, copied).



// #include <iostream>
// using namespace std;

// void updateArray(int (&arr)[5]) { // Array passed by reference
//     for (int i = 0; i < 5; i++) {
//         arr[i] += 10; // Modify the original array
//     }
// }

// int main() {
//     int numbers[5] = {1, 2, 3, 4, 5};

//     cout << "Before function call: ";
//     for (int i = 0; i < 5; i++) {
//         cout << numbers[i] << " ";
//     }
//     cout << endl;

//     updateArray(numbers); // Pass array by reference

//     cout << "After function call: ";
//     for (int i = 0; i < 5; i++) {
//         cout << numbers[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }




                                    
// _____________________const Function Parameters:_____________________________________
// Pass-by-reference risks corrupting the original data. If you do not have the intention of modifying the arrays inside the function, you could use the const keyword in the function parameter
//  A const function argument cannot be modified inside the function.
// eg. Searchin an value in the linear Search
