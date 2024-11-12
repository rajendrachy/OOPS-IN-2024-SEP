// SET -> Set refers to the container where all unique are stored in the Sorter Order
// SET -> Self balancing Tree (SBT)

// Time COmplexicity -> O(logn) -> Big of LOg n
// SET FUNCTION : a. Lower Bound()
// b. Upper Bound()


// #include <iostream>
// #include <vector>
// #include <list>
// #include <stack>
// #include <queue>
// #include <map>
// #include <unordered_map>
// #include <set>

// using namespace std;

// int main()
// {
//     set<int> s;

//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(0);


//     s.insert(1); // Duplicate values are not print
//     s.insert(2);// Duplicate values are not print
//     s.insert(3);// Duplicate values are not print

//   cout <<"The size is : " <<  s.size() << endl;

//     for (auto val : s)
//     {
//         cout <<"The sorted order unique values are: " << val << " " << endl;
//     }


//     cout << endl;

//     return 0;
// }






//_______________Lower Bound_________________


// #include <iostream>
// #include <vector>
// #include <list>
// #include <stack>
// #include <queue>
// #include <map>
// #include <unordered_map>
// #include <set>

// using namespace std;

// int main()
// {

//     set<int> s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     //s.insert(4);
//     s.insert(5);
//     s.insert(6);

//   //cout << "Lower Bound : " << *(s.lower_bound(4)) << endl; // * -> Dereferencing to print value
//   //cout << "Lower Bound : " << *(s.lower_bound(4)) << endl; // if 4 not exists then output is 5 (just more than 4  i.e that number + 1 value)
//    // if 4 value and greater then 4 value is Not exists then // output -> s.end() while dereferencing it the output will be 0
//      cout << "Lower Bound : " << *(s.lower_bound(7)) << endl; // * -> Dereferencing to print value


//     for (auto val : s)
//     {
//         cout << val << " ";
//     }

//     cout << endl;

//     return 0;
// }










// ___________Upper Bound___________________


#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>

using namespace std;

int main()
{

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

  cout << "Lower Bound : " << *(s.lower_bound(4)) << endl; // 4 // if existe equal to that value , if not the output will be greater than that  && if 
   // there is not greater than that value then the output will be s.end() i.e garbage valur or 0

  cout << "Upper Bound : " << *(s.upper_bound(4)) << endl; // 5  // greater then that value not equal to that value
 // lower and upper bound is count when the vector is in the shorted order only
    for (auto val : s)
    {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}


