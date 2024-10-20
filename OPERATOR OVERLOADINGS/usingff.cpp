// _____Operator Overloading Using a Friend Function______________

// uranary operator -> one argument  for the friend function 
// Binary operator -> two argument for the friend function


// ________For the member function_______
//uranary Operator ->  no argument  
// Binary operator -> single argument 



// __________CODE____________ 
// Overloading of the {+} => operator

#include<iostream>
using namespace std;

class Box  {
    private:
    int length;
    int breadth;
    int height;

    public:
    void setValue(int length, int breadth, int height) {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    int display() {
        return length * breadth * height;
    }


   friend Box operator +(Box, Box);

};


Box operator + (Box b1, Box b2) {
  Box box;
  box.length = b1.length + b2.length;
  box.breadth = b1.breadth + b2.breadth;
  box.height = b1.height + b2.height;
  return box;

};

int main () {
    Box box1;
    Box box2;
    Box box3;
   int volume = 0;
    box1.setValue(2, 4, 6);
    box2.setValue(3, 5, 6);

   volume = box1.display();
   cout << "Box 1 : " << volume << endl;

   volume = box2.display();
   cout << "Box 2 : " <<volume <<  endl;



  box3 = box1 + box2;
  volume = box3.display();
  cout << "Box 3: " << volume << endl;



    return 0;
}