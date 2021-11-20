#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() //fungsi utama pada program ini
{
    int a[3][3], i, j;
    srand(time(0));

    for (i = 0; i < 3; ++i) //mengisi matrix dengan angka random dari 1-100
    {
        for (j = 0; j < 3; ++j)
        {
            a[i][j] = rand() % 100;
        }
    }
    for (i = 0; i < 3; ++i) //menampilkan nilai matrix
    {
        cout << "Matrix Baris " << i + 1 << " : ";
        for (j = 0; j < 3; ++j)
            cout << a[i][j] << '\t';
        cout << '\n';
    }
    return 0;
}