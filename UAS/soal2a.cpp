#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Data
{
    char Nama[100];
    int Daya;
};

int main()
{

    cout << "Sorting Nilai Mahasiswa Menggunakan Quick Sort" << endl;

    int Case;
    cout << "Masukkan jumlah Matkul:";
    scanf("%d", &Case);

    for (int i = 0; i < Case; i++)
    {

        int Jumlah;
        cout << "Masukkan jumlah Mahasiswa:";
        scanf("%d", &Jumlah);

        Data X[Jumlah];

        for (int j = 0; j < Jumlah; j++)
        {
            scanf("%[^#]#%d", X[j].Nama, &X[j].Daya);
        }

        for (int j = 0; j < Jumlah - 1; j++)
        {

            for (int k = j + 1; k < Jumlah; k++)
            {
                if (X[j].Daya > X[k].Daya)
                {

                    int temp1 = X[j].Daya;
                    X[j].Daya = X[k].Daya;
                    X[k].Daya = temp1;

                    char temp2[100];
                    strcpy(temp2, X[j].Nama);
                    strcpy(X[j].Nama, X[k].Nama);
                    strcpy(X[k].Nama, temp2);
                }
            }
        }
        cout << "Data setelah ter-sorting (Ascending)" << endl;
        printf("Matkul #%d:", i + 1);
        for (int j = 0; j < Jumlah; j++)
        {
            printf("%s - %d", X[j].Nama, X[j].Daya);
        }
        printf("\n");
    }

    return 0;
}