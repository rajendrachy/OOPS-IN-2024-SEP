// ___________Find occurrences of palindrome words in a string bookmark_border_______________
#include<iostream>
#include<string>
using namespace std;

int countPalindrom(string str) {
  int start = 0, cnt = 0;
  int end;
  for(int i=0; i<=str.size(); i++) {
    if(str[i] == ' ' || i == str.size()) {
       end = i - 1;
      bool ispalin = true;
      while(start <= end) {
        if(tolower(str[start]) != tolower(str[end])) {
          ispalin = false;
          break;
        }
        start++;
       end--;
}
     if(ispalin)  cnt++;
      start = i + 1;
    }
  }
  return cnt;

}


int main () {
    string str;
    cout << "Enter a String: ";
    getline(cin, str);
    int result = countPalindrom(str);

cout << result<< endl;
    return 0;
}

