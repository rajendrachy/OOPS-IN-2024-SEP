#include<iostream>
#include<cstdio>

// #define ROWS 50
// #define COLS 50

using namespace std;


void printSpiral(int a[50][50], int r, int c) {
  // Write your code here
  

  int left = 0, top = 0, right = c - 1, bottom = r - 1;
while (left <= right && top <= bottom) {



    if(top <= bottom) {
     for(int i=top; i<=bottom; i++) {
        cout << a[i][left] << endl;
     }
    }
    left++;

   
   if(left <= right) {
    for(int i=left; i<=right; i++) {
        cout<<a[bottom][i] << endl;
    }
   }
   bottom--;

  if(left <= right) {
    for(int i=bottom; i>=top; i--) {
        cout<<a[i][right] << endl;
    }
   }


   right--;


    if(top <= bottom) {
    for(int i=right; i>=left; i--) {
      cout << a[top][i] << endl;
    }
    }
   top++;

}
}



int main()
{
  int r, c;
  cin >> r >> c;
  int a[50][50], i, j;
  for(i = 0; i < r; i++) {
    for(j = 0; j < c; j++) {
      cin >> a[i][j];
    }
  }
  printSpiral(a, r, c);

  return 0;
}

