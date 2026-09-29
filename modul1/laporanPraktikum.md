# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Muhammad Dhimas Hafizh Fathurrahman - 2311102151</p>

## Dasar Teori
isi dengan penjelasan dasar teori disertai referensi jurnal (gunakan kurung siku [] untuk pernyataan yang mengambil refernsi dari jurnal).
contoh :
Linked list atau yang disebut juga senarai berantai adalah Salah satu bentuk struktur data yang berisi kumpulan data yang tersusun secara sekuensial, saling bersambungan, dinamis, dan terbatas[1]. Linked list terdiri dari sejumlah node atau simpul yang dihubungkan secara linier dengan bantuan pointer.

## Unguided 

### 1. Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian 
memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua 
bilangan tersebut. 

```C++
#include <iostream>

using namespace std;

int main()
{
    float a, b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua  : ";
    cin >> b;

    cout << "\n--- Hasil Operasi ---" << endl;
    cout << "Penjumlahan (" << a << " + " << b << ") = " << a + b << endl;
    cout << "Pengurangan (" << a << " - " << b << ") = " << a - b << endl;
    cout << "Perkalian   (" << a << " * " << b << ") = " << a * b << endl;

    if (b != 0) {
        cout << "Pembagian   (" << a << " / " << b << ") = " << a / b << endl;
    } else {
        cout << "Pembagian   : Tidak terdefinisi (pembagian dengan nol)" << endl;
    }

    return 0;
}

```
### Output Unguided 1 :

##### Output 1
https://github.com/rid2userhub/109082500149_Ridho-Esa-P/blob/main/modul1/unguided1.png

penjelasan unguided 1 

Program ini dibuat untuk menerima masukan (input) berupa dua bilangan desimal atau pecahan bertipe data float, kemudian melakukan perhitungan serta menampilkan hasil operasi aritmatika dasar: penjumlahan, pengurangan, perkalian, dan pembagian.

### 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai 
angka tersebut dalam bentuk tulisan. Angka yang akan di- input-kan user adalah bilangan bulat 
positif mulai dari 0 s.d 100

```C++
```
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
### Output Unguided 2 :

https://github.com/rid2userhub/109082500149_Ridho-Esa-P/blob/main/modul1/unguided2.png

penjelasan unguided 2

Program ini bertujuan untuk mengonversi masukan berupa bilangan bulat positif dalam rentang 0 hingga 100 menjadi teks terbilang bahasa Indonesia).

### Buatlah program yang dapat memberikan input dan output sbb.

```C++
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

```
### Output Unguided 3 :


penjelasan unguided 3

Program ini bertujuan untuk membentuk pola perulangan visual (nested loop) berupa deret angka cermin (mirror) yang dipisahkan oleh karakter bintang (*) di bagian tengah dan mengerucut ke bawah membentuk pola segitiga terbalik sesuai dengan nilai masukan $n$.  

## Kesimpulan
...

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
