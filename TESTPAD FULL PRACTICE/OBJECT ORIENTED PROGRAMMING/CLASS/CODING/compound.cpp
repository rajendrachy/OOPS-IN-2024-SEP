// ____________________________Calculate amount using compound interest bookmark_border________________________
#include <iostream>
// #include <cstdio>
// #include <cmath>
#include<math.h>
#include <iomanip>
using namespace std;

// Function to calculate the total amount using compound interest
float calculateAmount(float p, float r, float t) {
    return p * pow((1 + r / 100.0), t); // -------------- use <cmath> or <math.h>
}

int main() {
    float p, r, t;
    cin >> p >> r >> t;

    float a = calculateAmount(p, r, t);
    cout << fixed << setprecision(1) << a; // ----------------- use <iomanip>

    return 0;
}




