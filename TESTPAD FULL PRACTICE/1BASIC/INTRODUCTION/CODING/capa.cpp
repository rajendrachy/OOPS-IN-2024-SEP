// ________________Capitalize the first letter of each word _____________


#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
// Include headers as needed

using namespace std;

// Alter the string according to specifications above
void capitalizeFirstChar(string &str)
{
  for (int i = 0; i < str.size(); i++) {
        if (i == 0 || isspace(str[i - 1])) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }
}




int main()
{
  int t,i,j=0;
  string a;
  cin>>t;
  getline(cin, a);
  while(t--)
  {
    getline(cin, a);
     capitalizeFirstChar(a);
    cout<<a<<endl;
    
  }
  return 0;
}
