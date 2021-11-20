#include <iostream>
using namespace std;

int main()
{
    int n, s, i, j;

    n = 5;

    for (i = n; i >= 0; i--)
    {
        for (j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}