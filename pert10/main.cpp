#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void no1()
{
    string s;
    char ch;

    cin.ignore();
    cout << "Masukkan Nama : ";
    getline(cin, s);
    cout << "Masukkan Character yang dicari : ";
    cin >> ch;
    int count = std::count(s.begin(), s.end(), ch);

    if (count == 0)
    {
        cout << "Data tidak ditemukan." << endl;
    }
    else
    {
        cout << "Data ditemukan!" << endl;
        cout << "Character " << ch << " terdapat " << count << " kali" << endl;
    }
}

void no2()
{
    char s1[20][100];
    string nama;
    int n = 0, x;

    cout << "Masukkan jumlah nama :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s1[i];
        cout << "\n";
    }

    bool ketemu = false;
    cout << "Masukkan nama yang dicari : ";
    cin >> nama;

    for (int i = 0; i < n; i++)
    {
        if (s1[i] == nama)
        {
            cout << "Data ditemukan !" << endl;
            ketemu = true;
        }
    }

    if (!ketemu)
    {
        cout << " Data tidak ditemukan !" << endl;
    }
}

int main()
{
    int pilih;
    char pil;
menu: // menu utama

    cout << "\n";
    cout << "Tugas BProg Sesi 10 \n";
    cout << "0. Keluar \n";
    cout << "1. Soal nomor 1 \n";
    cout << "2. Soal nomor 2 \n";
    cout << "\n";
    cout << "Pilihan anda: ";
    cin >> pilih;

    switch (pilih)
    {

    case 0:
        goto keluar;
        break;

    case 1:
        no1();
        break;

    case 2:
        no2();
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
    cout << "\n TERIMA KASIH \n";

    return 0;
}
