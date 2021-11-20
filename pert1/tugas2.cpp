#include <iostream>
#include <conio.h>

using namespace std;

int pilih;

int main(){

double panjang, lebar, luas;
int bilangan;
char pil;

menu: 
    system("cls");
    cout<<"Tugas Bahasa Pemograman Week 2: \n";
    cout<<"1. Hitung Luas Persegi Panjang \n";
    cout<<"2. Cek ganjil genap \n";
    cout<<"\n";
    cout<<"Pilihan anda: "; cin>>pilih;


    switch (pilih)
    {
    case 1:
    system("cls");
        cout<<"Masukan panjang : "; cin>>panjang;
        cout<<"Masukan lebar : "; cin>>lebar;
        luas = panjang * lebar;
        cout<<"Luas Persegi Panjang : "<< luas << "\n";
            break;
        

    case 2:
    system("cls");
        cout<<"Masukan Bilangan yang ingin dicek: \n"; cin >> bilangan;
        if (bilangan % 2 == 0)
            cout << bilangan <<" Adalah bilangan genap \n";
        else 
            cout << bilangan <<" Adalah bilangan ganjil \n";
            break;
    }

cout << "Ingin kembali ke menu? (Y/N) : "; cin >> pil;
    if ( (pil == 'Y') || (pil == 'y') ){
        goto menu;
    }
    else if ( (pil == 'N') || (pil == 'n') ) {
        goto keluar;
    }
keluar:
    system("cls");
    cout<<"\n TERIMA KASIH \n";
    getch();
    
    

return 0;
}