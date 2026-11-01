
#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    Stack S;
    createStack(S);

    int pilihan, nilai;

    do {
        cout << "\n";
        cout << "========================================\n";
        cout << "          MENU STACK POINTER            \n";
        cout << "========================================\n";
        cout << " 1. Tambah Terurut\n";
        cout << " 2. Pop          (Ambil Bilangan TOP)\n";
        cout << " 3. Tampilkan    (Lihat Isi Stack)\n";
        cout << " 4. Keluar\n";
        cout << "----------------------------------------\n";
        cout << " Pilihan : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "\nMasukkan bilangan: ";
                cin >> nilai;

                if (pushAscending(S, nilai))
                    cout << "Berhasil menambahkan "
                         << nilai << " secara terurut.\n";
                else
                    cout << "Penambahan gagal.\n";
                break;

            case 2:
                if (pop(S, nilai))
                    cout << "\nNilai yang di-Pop: "
                         << nilai << "\n";
                else
                    cout << "\nGagal! Stack masih kosong.\n";
                break;

            case 3:
                cout << "\n===== ISI STACK =====\n";
                printInfo(S);
                break;

            case 4:
                cout << "\nProgram selesai. Terima kasih!\n";
                break;

            default:
                cout << "\nPilihan tidak valid.\n";
        }

    } while (pilihan != 4);

    // Membersihkan seluruh node sebelum program berakhir
    clearStack(S);

    return 0;
}
