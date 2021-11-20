#include <iostream>
#include <conio.h>
using namespace std;

class Brand
{
private:
    int size, uang;
    int total = 0;
    int IMPS = 200000, IMPM = 220000, IMPO = 250000;
    int PradaS = 150000, PradaM = 160000, PradaO = 170000;
    int GucciS = 200000, GucciM = 200000, GucciO = 200000;
    int LVS = 300000, LVM = 300000, LVO = 350000;
    int KDS = 100000, KDM = 120000, KDO = 130000;

public:
    void IMP()
    {
        system("clear");
        cout << "BRAND : IMP" << endl;
        cout << " 1. Size S = Rp 200.000" << endl;
        cout << " 2. Size M = Rp 220.000" << endl;
        cout << " 3. Other Size = Rp 250.000" << endl;
        cout << " Pilihan Anda (1/2/3) : ";
        cin >> size;
        cout << "\n";
        if (size == 1)
        {
            total = total + IMPS;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else if (size == 2)
        {
            total = total + IMPM;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else if (size == 3)
        {
            total = total + IMPO;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else
        {
            cout << " Ukuran Tidak Tersedia. " << endl;
        }
    }

    void Prada()
    {
        system("clear");
        cout << "BRAND : Prada" << endl;
        cout << " 1. Size S = Rp 150.000" << endl;
        cout << " 2. Size M = Rp 160.000" << endl;
        cout << " 3. Other Size = Rp 170.000" << endl;
        cout << " Pilihan Anda (1/2/3) : ";
        cin >> size;
        if (size == 1)
        {
            total = total + PradaS;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else if (size == 2)
        {
            total = total + PradaM;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else if (size == 3)
        {
            total = total + PradaO;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else
        {
            cout << " Ukuran Tidak Tersedia. " << endl;
        }
    }

    void Gucci()
    {
        system("clear");
        cout << "BRAND : Gucci" << endl;
        cout << " 1. Size S = Rp 200.000" << endl;
        cout << " 2. Size M = Rp 200.000" << endl;
        cout << " 3. Other Size = Rp 200.000" << endl;
        cout << " Pilihan Anda (1/2/3): ";
        cin >> size;
        if (size == 1)
        {
            total = total + GucciS;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else if (size == 2)
        {
            total = total + GucciM;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else if (size == 3)
        {
            total = total + GucciO;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else
        {
            cout << " Ukuran Tidak Tersedia. " << endl;
        }
    }
    void LV()
    {
        system("clear");
        cout << "BRAND : Loius Vuitton" << endl;
        cout << " 1. Size S = Rp 300.000" << endl;
        cout << " 2. Size M = Rp 300.000" << endl;
        cout << " 3. Other Size = Rp 350.000" << endl;
        cout << " Pilihan Anda (1/2/3): ";
        cin >> size;
        if (size == 1)
        {
            total = total + LVS;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else if (size == 2)
        {
            total = total + LVM;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else if (size == 3)
        {
            total = total + LVO;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else
        {
            cout << " Ukuran Tidak Tersedia. " << endl;
        }
    }
    void KD()
    {
        system("clear");
        cout << "BRAND : Kick Denim" << endl;
        cout << " 1. Size S = Rp 100.000" << endl;
        cout << " 2. Size M = Rp 120.000" << endl;
        cout << " 3. Other Size = Rp 130.000" << endl;
        cout << " Pilihan Anda (1/2/3): ";
        cin >> size;
        if (size == 1)
        {
            total = total + LVS;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else if (size == 2)
        {
            total = total + LVM;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else if (size == 3)
        {
            total = total + LVO;
            cout << " Total Belanjaan Sementara Anda : " << total << endl;
        }
        else
        {
            cout << " Ukuran Tidak Tersedia. " << endl;
        }
    }

    int getTotal()
    {
        return total;
    }

    void trans()
    {
        cout << "\nMasukkan nominal uang anda: ";
        cin >> uang;
        if (uang == total)
        {
            cout << "Uang anda pas";
        }
        else if (uang < total)
        {
            cout << "Uang anda kurang";
        }
        else if (uang > total)
        {
            cout << "Kembalian anda : " << uang - total << endl;
        }
    }
};