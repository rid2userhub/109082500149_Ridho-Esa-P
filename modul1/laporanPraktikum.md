# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Muhammad Dhimas Hafizh Fathurrahman - 2311102151</p>

## Dasar Teori
A. Integrated Development Environment (IDE) dan Bahasa C++
Bahasa C++ merupakan bahasa pemrograman tingkat tinggi yang berorientasi objek (Object-Oriented Programming) sekaligus mendukung pemrograman prosedural, yang dikembangkan sebagai perluasan dari bahasa C untuk menangani kompleksitas perangkat lunak secara lebih efisien [2]. Untuk menulis dan menjalankan kode program, pengembang membutuhkan lingkungan kerja terintegrasi yang menggabungkan berbagai perangkat pengembangan.

1. Pengenalan IDE Code::Blocks
Code::Blocks merupakan salah satu perangkat lunak Integrated Development Environment (IDE) bersifat open-source yang dirancang secara khusus untuk memfasilitasi penulisan, kompilasi (compiling), pencarian kesalahan (debugging), dan eksekusi program berbahasa C dan C++ secara terpadu [2].

2. Struktur Dasar Program C++
Setiap kode program dalam C++ tersusun atas beberapa elemen fundamental, meliputi direktif pra-prosesor seperti #include <iostream> untuk mengimpor pustaka input-output, pendeklarasian namespace std, serta fungsi utama int main() yang bertindak sebagai titik awal (entry point) eksekusi oleh sistem operasi [2].

3. Operasi Input dan Output Dasar
Interaksi antara program dan pengguna dilakukan melalui objek aliran data (stream). Perintah std::cin memanfaatkan operator ekstraksi (>>) untuk menerima masukan data dari papan ketik (keyboard), sedangkan std::cout menggunakan operator penyisipan (<<) untuk menampilkan keluaran informasi ke layar monitor [2].

B. Tipe Data, Kontrol Alur, dan Perulangan Bersarang
Dalam memproses data numerik maupun teks, algoritma pemrograman mengandalkan variabel dengan alokasi memori yang tepat serta struktur logika yang mengatur jalannya instruksi secara teratur [1], [3].

1. Tipe Data dan Operasi Aritmatika
Tipe data menentukan jenis nilai serta batasan operasi yang dapat dilakukan pada suatu variabel [1]. Tipe data floating point seperti float digunakan untuk memproses bilangan pecahan atau desimal dengan tingkat presisi tunggal [2]. Operasi dasar aritmatika meliputi penjumlahan (+), pengurangan (-), perkalian (*), serta pembagian (/) yang membutuhkan validasi khusus guna menghindari galat matematis pembagian oleh nilai nol [3].

2. Struktur Kontrol Percabangan (Conditioning)
Struktur kontrol bersyarat seperti if, else-if, dan else digunakan untuk mengarahkan alur jalannya eksekusi program berdasarkan evaluasi kondisi logika yang bernilai benar (true) atau salah (false) [3]. Struktur ini memungkinkan program mengambil keputusan adaptif, seperti pemetaan angka puluhan dan satuan pada konversi terbilang kata.

3. Perulangan Bersarang (Nested Loop) dan Array
Perulangan (loop) digunakan untuk mengeksekusi blok kode secara berulang selama kondisi terminasi terpenuhi [1]. Perulangan bersarang (nested loop) adalah konstruksi di mana sebuah struktur perulangan berada di dalam blok perulangan lainnya [3]. Konsep ini lazim diimplementasikan bersama larik (array) untuk manipulasi matriks, pembentukan pola visual simetris, atau penelusuran elemen data secara bertingkat [1], [3].

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

https://github.com/rid2userhub/109082500149_Ridho-Esa-P/blob/main/modul1/unguided3.png


penjelasan unguided 3

Program ini bertujuan untuk membentuk pola perulangan visual (nested loop) berupa deret angka cermin (mirror) yang dipisahkan oleh karakter bintang (*) di bagian tengah dan mengerucut ke bawah membentuk pola segitiga terbalik sesuai dengan nilai masukan $n$.  

## Kesimpulan

Berdasarkan praktikum Modul 1 mengenai pengenalan lingkungan pengembangan Code::Blocks dan dasar-dasar pemrograman C++, dapat disimpulkan beberapa hal berikut:

Pemahaman Lingkungan Kerja (IDE) & Struktur Dasar C++: Penggunaan IDE Code::Blocks mempermudah proses penulisan (editing), kompilasi (compiling), hingga eksekusi (running) kode C++. Setiap program C++ membutuhkan pustaka input-output dasar seperti <iostream> serta fungsi utama int main() sebagai titik awal eksekusi program.

Operasi Aritmatika & Tipe Data: Pada program pertama, implementasi tipe data float terbukti efektif dalam menangani bilangan berkoma/desimal. Penanganan kondisi batas seperti validasi pembagian dengan nol menggunakan struktur percabangan if-else sangat penting untuk menghindari kesalahan kalkulasi (runtime error).

Penggunaan Array & Logika Percabangan: Pada program kedua, pemanfaatan larik (array) bertipe data string yang dipadukan dengan struktur percabangan bersyarat bertingkat (if-else if-else) dan operator modulus (%) berhasil menyederhanakan algoritma konversi angka numerik (0–100) menjadi teks terbilang bahasa Indonesia secara terstruktur dan efisien.

Implementasi Perulangan Bersarang (Nested Loop): Pada program ketiga, pembuatan pola cermin (mirror pattern) membuktikan bahwa penggunaan perulangan bersarang bertingkat (nested loop) dapat memanipulasi koordinat matriks baris dan kolom secara akurat, baik dalam pengaturan spasi maupun pencetakan karakter dan deret angka secara dinamis berdasarkan masukan pengguna.

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi: STRUKTUR DATA. Medan: UNIVERSITAS ISLAM NEGERI SUMATERA UTARA MEDAN.

[2] Indahyati, U., & Rahmawati, Y. (2020). Buku Ajar Algoritma dan Pemrograman dalam Bahasa C++. Sidoarjo: UMSIDA Press. https://doi.org/10.21070/2020/978-623-6833-67-4.

[3] Rosa, A. S., & Shalahuddin, M. (2018). Rekayasa Perangkat Lunak Terstruktur dan Berorientasi Objek. Bandung: Informatika Bandung.Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
