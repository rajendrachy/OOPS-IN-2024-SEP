#include <iostream>
#include <cstring>
using namespace std;

bool strAtEnd(const char *str, const char *suffix) {
    int len1 = strlen(str);
    int len2 = strlen(suffix);
    int start = len1 - len2;
    for (int i = 0; i < len2; i++) {
        if (str[start + i] != suffix[i])
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        char a[50], b[50];
        cin >> a >> b;
        bool result = strAtEnd(a, b);
        cout << result << endl;
    }
    return 0;
}
