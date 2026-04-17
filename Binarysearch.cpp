#include <iostream>
using namespace std;

int element[10];
int Panjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukkan panjang (array maksimal 10): ";
        cin >> Panjang;

        if (Panjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silahkan coba lagi.\n";
        }
    }

    cout << "\n=======================================\n";
    cout << "    Masukkan Elemen Array             \n";
    cout << "=====================================\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }
}


