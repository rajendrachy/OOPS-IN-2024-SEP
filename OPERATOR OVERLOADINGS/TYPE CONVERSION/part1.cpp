// link -> yputube -> https://youtu.be/J6ICYG_NLF4?si=OGuhHjpLmbR_QQ_W

// ___________Basic type to class Type _____________


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

    void display () {
        cout << hours <<"HOurs and "<<  minute << "minutes"; // converted into a class
    }
};

int main () {
   time t1(90); // 90 is a basic data type -> int
   t1.display();
   
    return 0;
}