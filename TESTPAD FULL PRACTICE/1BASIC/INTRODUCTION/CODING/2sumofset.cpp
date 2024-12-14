// Sum of the set of the number 
#include<iostream>
using namespace std;

// int main ( ) {

//     int t;
//     cout << "Enter the test case: ";
//     cin >> t; 

//     int sum = 0;
//     for(int i=1; i<=t; i++) {
//         int num;
//         cin >> num;

//         sum = sum + num;
//     }

//    cout << "The sum is : " << sum;


//     return 0;
// }




// _______________Using a function______________
int result (int n) {

    int sum = 0;
    for(int i=1; i<=n; i++) {
        int num;
        // cout << "Enter the array: ";
        cin >> num;

        sum += num;
    }
   return sum;

}

int main() {

    int n; // 5
    cout << "Enter a number : ";
    cin >> n;

   cout << "The ans is : " << result(n);
    return 0;
}


