#include <iostream>
#include <cstring>
using namespace std;

bool isAnagram(const char* str1, const char* str2) {
    int count[256] = {0};
    for (int i = 0; str1[i] != '\0'; i++) {
        count[str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        count[str2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        char a[100001], b[100001];
        cin >> a >> b;
        if (isAnagram(a, b)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
