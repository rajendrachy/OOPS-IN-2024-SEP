// ______________Kth largest Element___________________

#include<iostream>
#include<algorithm>

using namespace std;

int KthLArgest(int arr[], int size, int k) {
sort(arr, arr+size, greater<int>());
return arr[k];
 
}

int main () {

    int t, k, size;
    cout << "Enter the test cases: ";
    cin >> t;

    while(t--) {
        cin >> k;
        cin >> size;

        int arr[size];
        for(int i=0; i<size; i++) {
         cin >> arr[i];

         
        }

        int result = KthLArgest(arr, size, k);
         cout <<"The kth Largest element is : "  << result << endl;
    }
    return 0;
}