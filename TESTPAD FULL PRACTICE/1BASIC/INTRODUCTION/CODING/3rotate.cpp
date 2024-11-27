// ______________Rotate a List in the array______________________

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int rotations (vector<int> & arr, int r) {
   int n = arr.size();
   r = r % n;

   rotate(arr.begin(), arr.begin()+r, arr.end()); // algorothm -> rotate(first_iterator, middle_iterator, last_iterator);

}




int main () {
    
    int t;
    cout << "Enter the test Caes: ";
    cin >> t; // 1

    int n, r;
    cin >> n; // size of array

    vector<int> arr(n);

    for(int i=0; i<n; i++) {
        cin >> arr[i]; // 1 2 3 4 5 6
    }

    cin >> r; // no of the rotations
    rotations(arr, r);

  for(int i=0; i<n; i++) {
    cout << arr[i];

    if(i < n-1) {
        cout << " ";
    } else {
        cout << endl;
    }
    
  }



return 0;
}



