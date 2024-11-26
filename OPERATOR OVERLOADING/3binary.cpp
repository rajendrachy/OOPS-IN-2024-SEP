// ________Overloading Binary Operator__________

#include<iostream>
using namespace std;

class Box {
   private:
   double length;
   double breadth;
   double height;

   public:
   void setvalue(double length, double breadth, double height) { // function 
    this->length = length;
    this->breadth = breadth;
    this->height = height;

   }


   double volume () {
    return length * breadth * height;
   }


   //overloading a function 
    Box operator +(Box b); 
};


Box Box :: operator + (Box b) {
  Box box;

  box.length  = length + b.length;
  box.breadth = breadth + b.breadth;
  box.height =  height + b.height;

  return box;
};


int main() {
    Box Box1;
    Box Box2;
    Box Box3;
   
   double volume = 0.0;

   Box1.setvalue(2.0, 5.0, 7.0);
   Box2.setvalue(3.0, 8.0, 6.0);

   volume = Box1.volume();
   cout << "Box 1 : " << volume << endl;

   volume = Box2.volume();
   cout << "Box2 : " << volume << endl;


Box3 = Box1 + Box2;
volume = Box3.volume();
cout << "Box 3 : " << volume << endl;

    return 0;
}