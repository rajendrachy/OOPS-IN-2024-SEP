#include<iostream>
#include<string>
using namespace std;

void fun() {
    static int x = 0; //init statement -1 run

    //due to stacic int x == 0 --->>the x = 0, 1, 2, .....
    cout << "X : " << x<< endl;
    x++;
};

int main () {
    fun ();
    fun();
    fun();
}

