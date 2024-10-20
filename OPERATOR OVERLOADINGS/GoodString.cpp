#include <iostream>
#include <string>
using namespace std;

class GoodString {
    string str;
public:
    GoodString(string s) {
        str = s.length() > 100 ? s.substr(0, 100) : s; // Limit string length to 100
    }
    
    string left(int n) {
        return str.substr(0, n); // Return the leftmost n characters
    }
};



int main() {
    int n;
    string str;
    cout << "Enter a size of the string : ";
    cin >> n;              // Read an integer value for n
    cin.ignore();         // Ignore the newline character left in the input buffer
    getline(cin, str);    // Read the full line of string input
    GoodString gs(str);   // Create a GoodString object with the input string
    cout << gs.left(n) << endl; // Output the leftmost n characters
    return 0;
}
