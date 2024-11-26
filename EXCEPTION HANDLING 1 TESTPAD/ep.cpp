// ______________The error handling code performs the following tasks____________

// 1. Identify the problem (hit the exception).
// 2. Notify that an error has occurred (throw the exception).
// 3. Accept the error message (catch the exception).
// 4. Take corrective actions (handle the exception).

//________Example____________
// #include<iostream>

// using namespace std;

// int main()
// {
//   int m,n;
//   m = 35;
//   n = 0;
//   try
//   {
//     if ( n != 0)
//     {
//       cout <<"Result ( m/n) = "<< m/n<<endl;
//     }
//     else
//     {
//       throw (n); // throws int object
//     }
//   }



//   catch(int n) // Catches an exception
//   {
//     cout<<"Exception handled; n = "<< n <<endl;
//   }
//   return 0;
// }



// _____________Multiple catch statements______________


// #include<iostream>

// using namespace std;

// void Number(int value) 
// {
//   try
//   {
//     if (value == 0) throw 'x'; //char
//     else
//       if(value > 0) throw value; // int
//     else
//       if(value < 0) throw 1.0; // double
//     cout<<"End of try block\n";
//   }


//   catch (char ch)
//   {
//     cout<<"Caught a null value\n";
//   }
//   catch ( int m)
//   {
//     cout<<"Caught a positive value\n";
//   }
//   catch ( double d)
//   {
//     cout<<"Caught a negative value\n";
//   }
//   cout<<"End of try-catch block\n";
// }

// int main()
// {
//   Number(7); 
//   Number(0);
//   Number(-2);
//   return 0;
// }






// _______________Catching multiple exceptions________________

// #include<iostream>

// using namespace std;

// void Number(int value)
// {
//   try
//   {
//     if (value == 0) throw 'x'; //char
//     else
//       if(value > 0) throw value; // int
//     else
//       if(value < 0) throw 1.0; // double
//     cout<<"End of try block\n";
//   }
//   catch(...)
//   {
//     cout<<"Caught an exception\n";
//   }
//   cout<<"End of try-catch block\n";
// }

// int main()
// {
//   Number(7);
//   Number(0);
//   Number(-2);
//   return 0;
// }






// _______________Rethrowing exceptions______________

#include<iostream>

using namespace std;

void Division ( int x, int y )
{
  cout <<"inside function\n";
  try
  {
    if ( y == 0)
      throw y; // int
    else
      cout<<"division = "<< x/y <<endl;
  }
  catch ( int y)
  {
    cout<<"divide by zero inside function\n";
    throw;
  }
  cout<<"End of function\n";
}

int main()
{
  cout<<"inside main \n";
  try
  {
    Division(20, 0);
  }
  catch(int e) // catches an exception
  {
    cout<<"caught divide by zero inside main\n";
  }
  cout<<"End of main ( ) function\n";
  return 0;
}


