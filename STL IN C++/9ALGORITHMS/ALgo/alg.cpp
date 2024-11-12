#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
// 1 byte = 8 bits

using namespace std;


// ___________MIN & MAX ELEMENT_______________________

// int main () {
//     vector<int>vec = {1, 2, 3, 4, 5};

//    cout << *(max_element(vec.begin(), vec.end())) << endl;
//    cout << *(min_element(vec.begin(), vec.end())) << endl;

//     return 0;
// }








// ________________Binary Search___________________

// int main () {

//   vector <int> vec = {1, 2, 3,4, 5};
//   cout << binary_search(vec.begin(), vec.end(), 4); // 1 ouput -> exists and 0 -> not existe

//      return 0;
// }









// __________Count Set Bits__________________

int main()
{

    int n = 15;
    long int n2 = 15;
    long long int n3 = 15;

    cout << __builtin_popcount(n) << endl;
    cout << __builtin_popcountl(n2) << endl;
    cout << __builtin_popcountll(n3) << endl;

    return 0;
}


