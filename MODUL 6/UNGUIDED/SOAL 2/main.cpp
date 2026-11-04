#include "singlylist.h"

int main() {
    List L;
    address P1 = Nil, P2 = Nil, P3 = Nil, P4 = Nil, P5 = Nil;

    createList(L);

    // Alokasi dan penambahan elemen sesuai urutan visual
    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    // Menampilkan seluruh isi elemen dalam list
    printInfo(L);

    // Mencari elemen dengan info 8
    infotype target = 8;
    address found = findElm(L, target);

    if (found != Nil) {
        cout << target << " ditemukan dalam list" << endl;
    } else {
        cout << target << " tidak ditemukan dalam list" << endl;
    }

    return 0;
}