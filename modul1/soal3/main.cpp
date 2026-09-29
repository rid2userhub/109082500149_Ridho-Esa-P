#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "input: ";
    cin >> n;

    cout << "output:\n";

    for (int i = n; i >= 1; i--) {
        // Cetak spasi di awal untuk membentuk perataan segitiga ke kanan
        for (int spasi = 0; spasi < (n - i) * 2; spasi++) {
            cout << " ";
        }

        // Cetak angka menurun di sisi kiri (contoh: 3 2 1)
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Cetak karakter bintang di tengah
        cout << "*";

        // Cetak angka menaik di sisi kanan (contoh: 1 2 3)
        for (int j = 1; j <= i; j++) {
            cout << " " << j;
        }

        cout << endl;
    }

    // Baris terakhir (ujung bawah) hanya berupa satu tanda bintang
    for (int spasi = 0; spasi < n * 2; spasi++) {
        cout << " ";
    }
    cout << "*" << endl;

    return 0;
}
