// Factorial of a number 

#include<iostream>
#include<vector>
using namespace std;


long fact(int n) {
   if(n<=1) {
    return 1;
   } else {
    return n * fact(n-1);
   }
}

int main () {

   int n;
   cout << "Enter a number: ";
   cin >> n;
   int result = fact(n);
   cout << "The facorial of the number is : " << result << endl;

    return 0;
}