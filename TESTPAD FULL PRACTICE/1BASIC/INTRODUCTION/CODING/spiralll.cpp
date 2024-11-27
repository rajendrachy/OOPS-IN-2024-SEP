#include<iostream>
using namespace std;
#define ROWS 50
#define COLS 50

void sp(int a[ROWS][COLS], int r, int c) {

   int top =0, left=0, right=c-1, bottom=r-1;

   while(left<=right && top<=bottom) {
    if(left <= right) {
        for(int i=left; i<=right; i++) {
            cout << a[top][i] << endl;
        }
    }
    top++;

    if(top<=bottom) {
        for(int i=top; i<=bottom; i++) {
            cout << a[i][right] << endl;
        }
    }
    right--;



    if(top <= bottom) {
        for(int i=right; i>=left; i--) {
            cout << a[bottom][i] << endl;
        }
    }
    bottom--;


    if(left <= right) {
        for(int i=bottom; i>=top; i--) {
            cout << a[i][left] << endl;
        }
    }
    left++;
   }
}



int main () {

    int r, c;
    cout << "Enter row & cols : ";
    cin >> r >> c;

  int a[ROWS][COLS];
  int i, j;
  for(int i=0; i<r; i++) {
    for(int j=0; j<c; j++) {
        cin >> a[i][j];
    }
  }

   sp(a, r, c);


    return 0;
}
