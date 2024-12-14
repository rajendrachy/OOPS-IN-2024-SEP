// _____________C++ : Arrays & Strings_____________

//MCQ ->https://chatgpt.com/share/675be2e2-09d8-800b-9deb-0abb46ea63e3
//_________Array Declaration and Usage_____

// An array is a list of elements of the same type, identified by a pair of square brackets [ ]. 
// The syntax is:->
// type arrayName[arraylength];  // arraylength can be a literal or a variable



// int marks[5];        // Declare an int array called marks with 5 elements
// double numbers[10];  // Declare an double array of 10 elements
// const int SIZE = 9;
// float temps[SIZE];   // Use const int as array length






// Declare and initialize an int array of 3 elements
//int numbers[3] = {11, 33, 44};
// If length is omitted, the compiler counts the elements
// int numbers[] = {11, 33, 44};
// Number of elements in the initialization shall be equal to or less than length
// int numbers[5] = {11, 33, 44};  // Remaining elements are zero. Confusing! Don't do this
// int numbers[2] = {11, 33, 44};  // ERROR: too many initializers



// Use {0} or {} to initialize all elements to 0
// int numbers[5] = {0};  // First element to 0, the rest also to zero
// int numbers[5] = {};   // All element to 0 too

//---------------------C++'s array index begins with zero.--------------------




//            ---------------------------------------------------------------                                  
// You can find the array length using expression sizeof(arrayName)/sizeof(arrayName[0]), 
// where sizeof(arrayName) returns the total bytes of the array and sizeof(arrayName[0]) 
// returns the bytes of first element.





//------------------------Index out of bound---------------------
// const int size = 5;
// int numbers[size]; // Array Index from 0 to 4 ==> 5
// // Index out of bound!
// // Can compiled and run, but could pose very serious side effect!
// numbers[88] = 999;
// cout << numbers[77] << endl;



