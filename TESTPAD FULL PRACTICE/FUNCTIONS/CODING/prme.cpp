// _______________Verify Prime Number_______________________

#include<iostream>
using namespace std;


bool verifyPrime(int n) {
 
 if(n<=1) return false;

 if(n == 2) return true;

 if(n % 2 == 0) return false;

 for(int i=3; i*i<=n; i += 2) {
    if(n % i == 0) {
        return false;
    }
 }

 return true;

}

int main()
{
  int T, no;
  cin>>T;
  while(T--)
  {
    cin>>no;
    if (verifyPrime(no))
      cout<<"PRIME"<<endl; 
    else 
      cout<<"NOT PRIME"<<endl; 
  }
  return 0;
}
