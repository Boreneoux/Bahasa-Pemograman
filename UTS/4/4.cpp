#include <iostream>
#include "Brand.cpp"
using namespace std;

int main() //fungsi main pada program ini
{
    Brand b; //pemanggilan class Brand pada fungsi main
    int pilih, baju, size;
    char pil;
menu: //menu utama
    system("clear");
    cout << "\n";
    cout << "Selamat datang di Toko XYZ: \n";
    cout << "0. Keluar \n";
    cout << "1. Belanja \n";
    cout << "2. Cek Total \n";
    cout << "\n";
    cout << "Pilihan anda: ";
    cin >> pilih;

    switch (pilih)
    {

    case 0:
        goto keluar;
        break;

    case 1:
        system("clear");
        cout << "\n";
        cout << "Silahkan Pilih Brand Pilihan Anda:\n";
        cout << "1. IMP \n";
        cout << "2. Prada \n";
        cout << "3. Gucci \n";
        cout << "4. Louis Vuitton \n";
        cout << "5. Kick Denim \n";
        cout << "Pilihan anda (1/2/3/4/5) :  ";
        cin >> baju;

        if (baju == 1)
        {
            b.IMP(); //pemanggilan method pada class Brand
        }

        else if (baju == 2)
        {
            b.Prada(); //pemanggilan method pada class Brand
        }

        else if (baju == 3)
        {
            b.Gucci(); //pemanggilan method pada class Brand
        }

        else if (baju == 4)
        {
            b.LV(); //pemanggilan method pada class Brand
        }

        else if (baju == 5)
        {
            b.KD(); //pemanggilan method pada class Brand
        }

        else
        {
            cout << " Brand Tidak Tersedia" << endl;
        }
        break;

    case 2:
        system("clear");
        cout << "Total belanjaan anda saat ini adalah: " << b.getTotal() << endl;
        break;

    default:
        cout << "Input Invalid " << endl;
        break;
    }
    cout << "\n";
    cout << "Ingin kembali ke menu? (Y/N) : ";
    cin >> pil;
    if ((pil == 'Y') || (pil == 'y'))
    {
        goto menu;
    }
    else if ((pil == 'N') || (pil == 'n'))
    {
        goto keluar;
    }
keluar:
    system("clear");
    cout << "Total Belanjaan Anda = " << b.getTotal() << endl;
    b.trans();
    cout << "\n TERIMA KASIH SUDAH BELANJA DISINI \n";

    return 0;
}
