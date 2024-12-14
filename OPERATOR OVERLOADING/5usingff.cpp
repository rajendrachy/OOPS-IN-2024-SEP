//_________Function overloading using a friend function____________

#include<iostream>
using namespace std;


class Box {
  private:
  int length, breadth, height;

  public:
   void setvalues(int length, int breadth, int height) {
      this->length = length;
      this->breadth = breadth;
      this->height = height;
   }


   int volume () {
    return length * breadth * height;
   }


   // Using friend function overloading a operator + 

   friend Box operator + (Box, Box); // Syntax :-> <return type> operator <operator> (parameter)
   
};



Box operator + (Box b1, Box b2) {
  Box box;
  box.length = b1.length + b2.length;
  box.breadth = b1.breadth + b2.breadth;
  box.height = b1.height + b2.height;
  return box;
};


int main () {

    Box Box1;
    Box Box2;
    Box Box3;
     int volume = 0;
    Box1.setvalues(1, 4, 6);
    Box2.setvalues(2, 6, 7);

   volume = Box1.volume();
   cout << "Box1 : " << volume << endl;

   volume = Box2.volume();
      cout << "Box2 : " << volume << endl;


Box3 = Box1 + Box2;

volume = Box3.volume();
cout<<"Box3 : " << volume << endl;



    return 0;
}