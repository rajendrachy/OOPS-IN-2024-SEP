// ________________String Operations_________________
// 1. ------------Checking the length of a string:-----------------


// int length();
// int size();
//    both of them return the length of the string(both same lenght and size -> give the same output)
// #include <string>
// string str("Code Quotient");
// cout << str.length() << endl;  // 13
// cout << str.size()   << endl;  // 13





// 2.-------------------Check for empty string:-------------------
// bool empty();
//    Check if the string is empty.
// string str1("Code Quotient");
// string str2;                   // Empty string
// cout << str1.empty() << endl;  // 0 (false)
// cout << str2.empty() << endl;  // 1 (true)





// 3. Copying from another string: Simply use the assignment (=) operator.
// string str1("Code Quotient"), str2;
// str2 = str1;
// cout << str2 << endl;   // Code Quotient




// 4. Extracting sub-string:->
// string substr(int beginIndex, int size);   Return the sub-string starting at beginIndex, of size
// string str("Code Quotient");
// cout << str.substr(2, 6) << endl;  // "de Quo"





// Search/Replacing characters: You can use the functions available in the <algorithm> such as replace(). For example,
// #include <algorithm>
// ......
// string str("Code Quotient");
// replace(str.begin(), str.end(), 'o', '_');
// cout << str << endl;      // "C_de Qu_tient"



// The <iomanip> header provides so-called I/O manipulators for formatting input and output:




// setw(int field-widht): set the field width for the next IO operation. setw() is non-sticky and must be issued prior to each IO operation. The field width is reset to the default after each operation (with just enough width to accommodate the field).
// setfill(char fill-char): set the filled character for padding to the field width.
// left|right|internal: set the alignment
// fixed/scientific (for floating-point numbers): use fixed-point notation (e.g, 12.34) or scientific notation (e.g., 1.23e+006).
// setprecision(int numDecimalDigits) (for floating-point numbers): specify the number of digits after the decimal point.
// boolalpha/noboolalpha (for bool): display bool values as alphabetic string (true/false) or 1/0.


