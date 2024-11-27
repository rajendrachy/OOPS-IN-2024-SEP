// ______________________Sum of Range______________________________

#include<iostream>
using namespace std;


int sumofRange(int min, int max) {
int sum = 0;
for(int i=min; i<=max; i++) {
    sum += i;
}
return sum;
}

int main () {
    int t;
    cin >> t;

    while(t--) {
        int min, max;
        cin >> min >> max;
    
    cout << "The sum is :" << sumofRange(min, max)<< endl;

    }



    return 0;
}