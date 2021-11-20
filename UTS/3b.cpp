#include <iostream>
using namespace std;

int main()
{
    int n, s, i, j;

    n = 5;

    for (i = n; i >= 1; i--)
    {
        for (int s = n - i; s > 0; s--)
            cout << " ";
        for (j = i; j > 0; j--)
            cout << "*";
        cout << "\n";
    }
    return 0;
}