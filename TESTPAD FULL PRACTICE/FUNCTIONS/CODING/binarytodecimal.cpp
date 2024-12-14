// _______________Binary to decimal_________________

#include<iostream>
using namespace std;


int BinarytoDec(string str) {
  int dec = 0;

  for(int i=0; str[i] != '\0'; i++) {
    dec = dec * 2 + (str[i] - '0');
  }
  return dec;
}


int main () {
    int t;
    cin >> t;
    string str;
    while(t--) {
        cin >> str;

        cout << BinarytoDec(str);
    }
    return 0;
}
