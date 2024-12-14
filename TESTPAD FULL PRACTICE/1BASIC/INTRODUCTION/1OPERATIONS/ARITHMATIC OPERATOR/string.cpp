// ________________Stirng________________
// The original C-style string: A string is a char array, terminated with a NULL character '\0' (Hex 0). It is also called Character-String or C-style string. C-string will be discussed later.
// the new string class introduced in C++98.



//-------------------- Array of Characters - C-String----------------------

// In C, a string is a char array terminated by a NULL character '\0' (ASCII code of Hex 0). C++ provides a new string class under header <string>. The original string in C is known as C-String (or C-style String or Character String). You could allocate a C-string via:

// char message[256];     // Declare a char array 
//                        // Can hold a C-String of up to 255 characters terminated by '\0'
// char str1[] = "CodeQuotient"; // Declare and initialize with a "string literal".
//                        // The length of array is number of characters + 1 (for '\0').
// char str1char[] = {'H', 'e', 'l', 'l', 'o', '\0'}; 
// char str2[256] = "CodeQuotient";  // Length of array is 256, keeping a smaller string.



//#include <string>
// using namespace std;

// string str1("Hello"); // Initialize with a string literal (Implicit initialization)
// string str2 = "world"; // Initialize with a string literal (Explicit initialization via assignment operator)
// string str3;          // Initialize to an empty string
// string str4(str1);    // Initialize by copying from an existing string object







// We need to "#include <string>" to use the string class, and "using namespace std" as string is defined under std namespace.
// "cin >> aStr" reads a word (delimited by space) from cin (keyboard), and assigns to string variable aStr.
// getline(cin, aStr) reads the entire line (up to '\n') from cin, and assigns to aStr. The '\n' character is discarded.






#include <iostream>
#include <string>    // use string class
using namespace std;

int main() {
  string msg = "hello, world!";
  cout << msg << endl;
  cout << msg.length() << endl;  // length of string
  cout << msg.at(1) << endl;     // char at index 1
  cout << msg[1] << endl;        // same as above
  cout << msg.empty() << endl;   // test for empty string
  cout << msg.substr(3, 3) << endl; // sub-string begins at
  // pos 3 of size 3
  cout << msg.replace(3, 3, "why") << endl; // replace sub-string
  cout << msg.append("end") << endl;        // append behind
  cout << msg + "end" << endl;              // same as above
  cout << msg.insert(3, "insert") << endl;  // insert after pos 3

  string msg1;
  msg1 = msg;   // copy
  cout << msg1 << endl;

}




