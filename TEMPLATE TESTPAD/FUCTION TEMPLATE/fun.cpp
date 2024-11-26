// ________________The general syntax is_________________


//template < class T >
// returntype Function_Name ( T arg) // Arguments
// {
// 	//………………..
// 	// Function body
// }
// They are not member functions of any class and hence can be invoked directly without using object and dot operator.


// __________Example________________
// ______________________Function Templates with single parameters___________________________

// #include<iostream>

// using namespace std;

// template <class T>
// void Number(T value) //Argument
// {
//   cout<< "Entered Number is "<< value <<endl;
// }

// int main()
// {
//   Number(35); // Parameter
//   Number('N');
//   Number(65.05);
//   return 0;
// }




// __________________Function Templates with multiple parameters_____________________

// ________The general syntax is_________

//template < class T1, class T2, …….. >
// returntype Function_Name ( T1 arg1, T2 arg2, …….)
// {
// 	………………..
// 	// Function body
// }



// ______________Example_____________________

// #include<iostream>

// using namespace std;

// template <class T1, class T2>
// void Number(T1 value1, T2 value2)
// {
//   cout<< "Entered Number is "<< value1 <<"\t"<<value2<<endl;
// }

// int main()
// {
//   Number(35,"Amit");
//   Number('N',45.56);
//   Number(65.05,5587);
//   return 0;
// }

//



//______________Member function templates________________

//We can define the member functions outside the class.

// ___________The general syntax is____________
// template < class T>
// return_ type Class_Name < T> : : Function_Name ( arg_list )
// {
// 	…………….
// 	// function body
// 	……………..
// }



// _______________Example_____________________

//Memebr Function is used in the class

// #include<iostream>

// Using namespace std;

// template < class T>
// class Number
// {
//   public:
//   Number(T value);
// };

// template < class T>
// //Member function
// Number <T> :: Number(T value)
// {
//   cout<< "Entered Number is "<< value << endl;
// }

// int main()
// {
//   Number<int> I1 (35);
//   Number<char> I2 ('N');
//   Number<float> I3 (65.05);
//   return 0;
// }
// // In the above program, the constructor function Number ( ) is defined outside the class.




