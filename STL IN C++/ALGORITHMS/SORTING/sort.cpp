#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include<unordered_set>
#include<algorithm>

using namespace std;
// ___________________Ascending Order Sort____________________

// int main () {

//     int arr[5] = {3, 5, 1, 8, 2};

//     sort(arr, arr+5); // default sort in the Ascending orders


// for(int val : arr) {
//     cout << val <<"  ";
// }

// cout << endl;

//     return 0;
// }







// int main () {

//    vector<int> vec = {3, 5, 1, 8, 2};
//    sort(vec.begin(), vec.end());

// for(int val : vec) {
//     cout << val <<"  ";
// }

// cout << endl;

//     return 0;
// }





// ____________________Descending Order Sort_______________________

// sort(arr, arr+n, greater<int>())

// int main () {

//    vector<int> vec = {3, 5, 1, 8, 2};
//    sort(vec.begin(), vec.end(), greater<int>());

// for(int val : vec) {
//     cout << val <<"  ";
// }

// cout << endl;

//     return 0;
// }







// ________In Pairs // sort acording to the first value______________

// int main () {

//    vector<pair<int, int>> vec = {{3,2}, {2, 1}, {7, 1}, {5, 2}};
//    sort(vec.begin(), vec.end()); // sort based on the first value

// for(auto p : vec) {
//     cout << p.first <<"  " << p.second << endl;;
// }

// cout << endl;

//     return 0;
// }




// ________In Pairs // sort acording to the second value______________

// bool  comparator (pair <int, int> p1, pair<int, int> p2) {
//   if(p1.second < p2.second) return true;
//   if(p1.second > p2.second) return false;

//   if(p1.first < p2.first) return true;

//   else return false;
// }


// int main () {

//    vector<pair<int, int>> vec = {{3,1}, {2, 1}, {7, 1}, {5, 2}};
//    sort(vec.begin(), vec.end(), comparator); // sort based on the first value

// for(auto p : vec) {
//     cout << p.first <<"  " << p.second << endl;;
// }

// cout << endl;

//     return 0;
// }




// _____________Reverse___________________

// int main () {

//    vector<int> vec = {1, 2, 3, 4, 5};
//    reverse(vec.begin(), vec.end());

// //  reverse(vec.begin()+1, vec.end()+3);

//    for(auto val : vec) {
//     cout << val << " ";

//    }
//    cout << endl;

//     return 0;
// }




// _______________Next Permutation________________

// int main () {

//     string s = "abc";

//     next_permutation(s.begin(), s.end());
//     // prev_permutation(s.begin(), s.end());
//     cout << s << endl;
//     return 0;
// }







// _____________MIN && MAX____________________

// int main () {


//     cout << max(4, 5) << " " << min(6, 10) << endl; // 5 6
//     return 0;
// }



// _______________Swap________________

int main () {

    int a = 5, b = 10;

    swap(a, b);

    cout << "a = " << a << " b = " << b << endl;
    return 0;
}