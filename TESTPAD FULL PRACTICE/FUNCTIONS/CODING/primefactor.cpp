// __________Prime Factor of Number__________________
#include <iostream>
using namespace std;
void PrimeFactor(int n)
{

    for (int i = 2; i <= n / i; i++)
    {
        while (n % i == 0)
        {
            cout << i << endl;

            n = n / i;
        }
    }

    if (n > 1)
    {
        cout << n << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    PrimeFactor(n);
    return 0;
}