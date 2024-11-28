#include<iostream>
using namespace std;

class teacher {
    //----> properties 
    //---> atrtributes
    public:
string name;
string dept;
string subject;
string sal;


//---> methods //----> member functions
void changedept(string newdept) {
    dept = newdept;
}
//----->  setter
void setsal (int s) {
sal = s;
}
//-----> getter
string getsal() {
    return sal;
}

};
int main () {
   
   teacher t1;
   t1.name = "Sharadha";
   t1.subject = "C++";
   t1.sal = "one lakh";
  

   cout<<t1.name<<endl;
   cout<<t1.subject<<endl;
   cout<<t1.sal<<endl;
    return 0;
}