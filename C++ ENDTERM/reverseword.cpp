#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

void revWordsString(string str) {
    string word = "", result = "";
    for (char c : str) {
        if (c == ' ') {
            reverse(word.begin(), word.end());
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    reverse(word.begin(), word.end()); // Reverse the last word
    result += word;
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To consume the newline character left by cin
    while (t--) {
        string str;
        getline(cin, str);
        revWordsString(str);
    }
    return 0;
}
