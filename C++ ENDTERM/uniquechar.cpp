#include <iostream>
#include <cstring>
using namespace std;

bool isUniqueChars(const char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        int count = 0;
        for (int j = 0; j < len; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count > 1) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        char a[50];
        cin >> a;
        if (isUniqueChars(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
