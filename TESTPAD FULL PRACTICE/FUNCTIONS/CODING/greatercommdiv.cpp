// ______________Greater common divisior___________________

// #include<iostream>
// using namespace std;

// int gcd(int i, int j) {
// if(j == 0) return i;

// else
// return gcd(j, i%j);

// }

// int main () {
//     int i, j;
//     cin >> i >> j;

//     cout << gcd(i, j) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

void gcd(int i, int j) {
    if (j == 0) {
        cout << "GCD is: " << i << endl; // Print the result when the base case is reached
    } else {
        gcd(j, i % j); // Recursive call
    }
}

int main() {
    int i, j;
    cin >> i >> j;
    gcd(i, j); // Call the function

    return 0;
}


