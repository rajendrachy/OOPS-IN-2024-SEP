// what is abstract class ? 
//ans-> A class is contain atleast one pure virtual function is called abstract class, 
//we can not declere the object of the abstract class


// _______Syntax__________
// class A { // we can-not create a obj of this abstract calss
// public:
// virtual void show() = 0;
// }


// _____________Pure virtual function____________
//1> pure virtual function  are the virtual function which have no defination. 
//They start with virtual keyword and ends with equal to 0;
//2> if we don't override the pure virtual function in the derived class , then 
//derive class also becomes abstract class
// 3> we cannot change the signature of the pure virtual function