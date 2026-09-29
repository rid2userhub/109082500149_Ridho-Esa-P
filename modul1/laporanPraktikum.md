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

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 2_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided2-1.png)

##### Output 2
![Screenshot Output Unguided 2_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 2

### 3. (isi dengan soal unguided 3)

```C++
source code unguided 3
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

contoh :
![Screenshot Output Unguided 3_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided3-1.png)

##### Output 2
![Screenshot Output Unguided 3_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

penjelasan unguided 3

## Kesimpulan
...

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
