#include <iostream>

using namespace std;

int fib(int n) //function fibonacci.
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}

int main() //function main pada program ini
{

    int n, i, s = 0;

    cout << "Masukkan limit bilangan fibonacci: "; //mengeluarkan keluaran menanyakan user limit bilangan yang diinginkan
    cin >> n;                                      // user memberi masukkan ke dalam variabel n

    cout << "Hasil bilangan fibonacci: \n"; // mengeluarkan hasil bilangan
    for (i = 1; i <= n; i++)                //perulangan untuk setiap tahapan fibonacci
    {
        cout << "fibonacci ke-" << i << ": " << fib(s) << endl; //pemanggialn function fibonacci
        s++;
    }
    return 0;
}