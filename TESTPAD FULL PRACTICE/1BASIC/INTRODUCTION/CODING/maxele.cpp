// ______________Max Elemwnt in the array_________________

#include<iostream>
using namespace std;


int MaxElement(int arr[], int size) {
   int max = arr[0];
   for(int i=0; i<size; i++) {
    if(arr[i] > max) {
        max = arr[i];
    }
   }
   return max;
}

int main () {

int size;
cout << "Enter the size of the array :";
cin >> size;

int arr[size];
for(int i=0; i<size; i++) {
    cin >> arr[i];
}

int result = MaxElement(arr, size);
cout << "The max element is: " << result;

    return 0;
}