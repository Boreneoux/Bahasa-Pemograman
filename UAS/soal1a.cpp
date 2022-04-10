#include <iostream>
#include <string>
using namespace std;

string nama[3];
int length;

void create()
{
    cout << "Masukkan 3 nama: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Nama ke - " << i + 1 << ": ";
        cin >> *(nama + i);
        length++;
    }
}

void display()
{

    cout << "Menampilkan Data: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Nama ke - " << i + 1 << ": " << *(nama + i) << endl;
    }
}

void update()
{
    display();
    cout << "Ubah Data Nama: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Nama ke - " << i + 1 << ": ";
        cin >> *(nama + i);
    }
}

int main()
{
    int pilih;
    char kembali;
    do
    {
        cout << "MENU";
        cout << "\n 1. Create Nama ";
        cout << "\n 2. Update Nama ";
        cout << "\n 3. Tampilkan Nama ";
        cout << "\nPilih : ";
        cin >> pilih;
        cout << "\n";

        switch (pilih)
        {
        case 1:
            create();
            cout << "\n";
            display();
            break;
        case 2:
            if (length != 3)
            {
                cout << " Data belum ada, silahkan bikin terlebih dahulu! " << endl;
            }
            else
                update();
            break;
        case 3:
            display();
            break;
        default:
            cout << "Pilihan Salah" << endl;
            break;
        }

        cout << "Ingin memilih menu lain (y/t)? ";
        cin >> kembali;

        cout << "\n";

    } while (kembali != 't');

    cout << "Thanks" << endl;

    return 0;
}