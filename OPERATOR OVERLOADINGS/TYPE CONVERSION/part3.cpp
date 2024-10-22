// _________Class to Class ___________

// link yt -> https://youtu.be/gTkwhkiuOpk?si=NWRHMqBd098gHtiY

#include<iostream>
using namespace std;


class invent2;
class invent1 {
   int code;
   int item;
   float price;

   public:
   invent1(int a, int b, float c) {
    code = a;
    item = b;
    price = c;

   }

   void putdata() {
    cout << code << "\n" << item << "\n" << price << "\n";
   }

   int getcode() {
     return code;
   }

   int getitem () {
    return item;
   }

   float getprice() {
    return price;
   }

   operator float () {
    return item * price;
   }

};


class invent2 {
  int code;
  float value;

  public:
  invent2() {
    code  = 0;
    value = 0;
  }

  invent2(int x, float y) {
    code = x;
    value = y;
  }
};

int main () {

    return 0;
}

// time -> 7 : 30 min


