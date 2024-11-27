#include<iostream>
#include<string>
using namespace std;


// Do not print anything, just reverse the given string
void reverseString (string &str) {
  // Write your code here
 int len = str.size();
  for(int i=0, j = len-1; i<=j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}


int main(){
   string str;
   int test, num;
  
   cin>>test;
   while(test!=0){
     cin>>str;
     reverseString(str);
     cout<<str<<endl;
     test--;
   }
    return 0;
}