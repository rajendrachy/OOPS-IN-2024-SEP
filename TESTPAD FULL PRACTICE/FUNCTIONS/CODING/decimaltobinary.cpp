#include<iostream>
using namespace std;

string DecToBinary(int num) {
  string binary = "";
  
  // Edge case for 0
  if (num == 0) {
    return "0";
  }
  
  while (num > 0) {
    binary = char((num % 2) + '0') + binary; // Prepend remainder (0 or 1)
    num /= 2;  // Divide number by 2
  }
  
  return binary;
}

int main() {
    int t;
    cin >> t;
    int num;
    while(t--) {
        cin >> num;
        cout << DecToBinary(num) << endl; // Output binary equivalent
    }
    return 0;
}




