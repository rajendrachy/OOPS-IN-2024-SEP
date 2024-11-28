// ____________________Friend Functions_________________________

// In C++, a non-member function can access to the private members of a class. 
// This is possible by declaring a non-member function friend to the class whose private members 
// are to be accessed

// _________Syntax___________

// class < class name>
// {
// 	…………
// 	public:
// 	…………
// 	friend < return type> <function name>(<argument type>);
// };





#include<iostream>
#include<cstdio>
#include<cstring>
// Include headers as needed

using namespace std;

class Account
{
  private:
  char name[18];
  int acc_no;
  float amount;
  public:
  void getData( )
  {
    strcpy(name, "Amit");
    acc_no = 1234567890;
    amount = 34000.00;
  }
  friend void TDS_Cal(Account);
};

void TDS_Cal (Account ac)
{
  float tds;
  tds = ac.amount/10;
  cout <<"\n Tds of account no." << ac.acc_no << " is Rs. " << tds;
}

int main ( )
{
  Account Acc;
  Acc.getData();
  TDS_Cal(Acc);
  return 0;
}






// #include<iostream>
// #include<cstdio>
// #include<cmath>
// // Include headers as needed

// using namespace std;

// class Y;
// class X
// {
//   int x;
//   public:
//   void read_value1( )
//   {
//     x=25;
//   }
//   void display(Y);
// };

// class Y
// {
//   int y;
//   public :
//   void read_value2( )
//   {
//     y = 45;
//   }
//   friend void X :: display(Y);
// };

// void X :: display(Y y1)
// {
//   cout << "x = "<< x << endl;
//   cout << "y = "<< y1.y << endl;
// }

// int main( )
// {
//   X x1;
//   Y y1;
//   x1.read_value1();
//   y1.read_value2();
//   x1.display(y1);
//   return 0;
// }



