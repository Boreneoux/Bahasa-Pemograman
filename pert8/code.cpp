#include <iostream>
#include <stdio.h>

using namespace std;

void update(int *a, int *b)
{
    int sum = *a + *b;
    int riil = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;  // Mengubah value dari vairbel a dengan fungsi sum dimana fungsi dari sum adalah hasil penambahan value pointer a dengan pointer b
    *b = riil; // mengubah value dari variabel b dengan fungsi riil dimana fungsi riil adalah hasil pengurangan value pointer a dengan pointer b
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b; //deklarasi pointer a dengan address si variabel a dan variabel b
    cout << "Masukkan value a: ";
    cin >> a;
    cout << "Masukkan value b: ";
    cin >> b;
    update(pa, pb);
    cout << "Value a setelah diganti dengan pointer : " << a << endl;
    cout << "Value b setelah diganti dengan pointer : " << b << endl;

    return 0;
}
