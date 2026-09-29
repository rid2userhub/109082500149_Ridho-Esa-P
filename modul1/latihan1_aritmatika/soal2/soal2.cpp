#include <iostream>
#include <string>

using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka (0 - 100): ";
    cin >> angka;

    // Array kata dasar untuk angka 0 sampai 11
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima",
                       "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};

    cout << "\nOutput:\n";
    cout << angka << " : ";

    if (angka < 0 || angka > 100) {
        cout << "Angka di luar jangkauan (hanya 0 s.d 100)" << endl;
    } else if (angka <= 11) {
        cout << satuan[angka] << endl;
    } else if (angka <= 19) {
        cout << satuan[angka % 10] << " belas" << endl;
    } else if (angka <= 99) {
        int puluhan = angka / 10;
        int sisa = angka % 10;

        if (sisa == 0) {
            cout << satuan[puluhan] << " puluh" << endl;
        } else {
            cout << satuan[puluhan] << " puluh " << satuan[sisa] << endl;
        }
    } else if (angka == 100) {
        cout << "seratus" << endl;
    }

    return 0;
}
