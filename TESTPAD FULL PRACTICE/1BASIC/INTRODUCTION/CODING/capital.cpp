#include<iostream>
#include<string>
// Include headers as needed

using namespace std;

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
  while(t != 0)
  {
    getline(cin, a);
    capitalizeFirstChar(a);
    cout<<a<<endl;
    t--;
  }

  return 0;
}
