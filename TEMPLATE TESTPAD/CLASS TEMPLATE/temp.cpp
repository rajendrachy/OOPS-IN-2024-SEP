// The class template creates a generic class with an anonymous type.

// #include <iostream>
// using namespace std;

// template <typename T> // T is an anonymous (unspecified) type
// class Box
// {
//   T data;

// public:
//   Box(T value) {
//     data = value;
//   }

//   void display()
//   {
//     cout << data << endl;
//   }
// };

// int main()
// {
//   Box<int> b(10); // Instantiate template with int
//   b.display();    // Output: 10
//   return 0;
// }



// This example shows how a single template parameter (T) can make a class generic,
//  and it's compact and easy to understand.

//_______________Short_____________Note________________

// template < class T >
// class class_ name
// {
// 	Class members and functions
// 	//………………………………
// };

// Here template and class are keywords
// ‘T’ is a variable of template type that must be declared within < > (angle brackets).
// Templates cannot be declared inside the class or functions.
// They must be global.

// ________________Example___________________

// #include<iostream>

// using namespace std;

// template <class T>
// class Number
// {
//   public:
//   Number(T value)
//   {
//     cout<< "Entered Number is " <<value << endl;
//   }
// };

// int main()
// {
//   Number <int> I1 (35);
//   Number <char> I2 ('N');
//   Number <float> I3 (65.05);
//   return 0;//
//}
// Here three values of different data types are printed by using a single constructor function 
// with the help of templates.
// It occupies less disk space.

// _________________Class Templates with multiple parameters_______________________

// Syntax

// template < class T1, class T2)
// class Class_Name
// {
// 	………….
// 	………….
// };
// Two arguments of generic types T1 and T2 known as template arguments

//_____Program________

// #include <iostream>

// using namespace std;

// template <class T1, class T2>
// class Largest
// {
//   T1 Val1;
//   T2 Val2;

// public:
//   Largest(T1 x, T2 y)
//   {
//     Val1 = x;
//     Val2 = y;
//   }
//   void Show_result()
//   {
//     cout << "\nLarger value is " << (Val1 > Val2 ? Val1 : Val2);
//   }
// };

// int main()
// {
//   Largest<int, float> L1(35, 56.75);
//   Largest<char, char> L2('N', 'P');
//   Largest<float, double> L3(65.05, 45.75);
//   L1.Show_result();
//   L2.Show_result();
//   L3.Show_result();
//   return 0;
// }
