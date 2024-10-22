// ______Class to Basic_________

#include<iostream>
using namespace std;


class time {
    int hours;
    int minute;

    public:
    time(int t) {
      hours = t / 60;
      minute = t % 60;
    }

    int add () {
        cout << hours <<"Hours and "<<  minute << "minutes"<< endl; // converted into a class
        int m;
        m = minute + 10;
        return m;
    }
};

int main () {
   time t1(90); 
    int j;
    j = t1.add();
   cout << "The value of j is : " << j;
    return 0;
}