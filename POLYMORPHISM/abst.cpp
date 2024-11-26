#include<iostream>
#include<string>
using namespace std;

class Shape { //abstract class
virtual void draw() = 0; //pure virtual function
};


class Circle : public Shape { //inherentance
  public:
  void draw () {
    cout << "drawing a circle\n";
  }
};

int main () {
    Circle c1;
    c1.draw();
    return 0;
}