//_______________Multi Set____________________
// The Element Should be in the Sorted Order && all the duplcate value are print as a Output


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
//     multiset<int> s;

//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(0);


//     s.insert(1); 
//     s.insert(2);
//     s.insert(3);

//   cout <<"The size is : " <<  s.size() << endl;

//     for (auto val : s)
//     {
//         cout <<"The sorted order unique values are: " << val << " " << endl;
//     }


//     cout << endl;

//     return 0;
// }




// _______________Unordered_Set__________________________
// In the Unordered_set we can get a Unique values && we get Unsorted data
// we cannot use lower bound && upper bound in the unordered set


#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include<unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);


    s.insert(1); 
    s.insert(2);
    s.insert(3);

  cout <<"The size is : " <<  s.size() << endl;

    for (auto val : s)
    {
        cout <<"The sorted order unique values are: " << val << " " << endl;
    }


    cout << endl;

    return 0;
}



