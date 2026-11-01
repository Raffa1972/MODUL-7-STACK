
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
        cout << "             MENU STACK ARRAY          \n";
        cout << "========================================\n";
        cout << " 1. Push          (Masukkan Bilangan)\n";
        cout << " 2. Pop           (Ambil Bilangan dari TOP)\n";
        cout << " 3. Tampilkan     (Lihat Isi Stack)\n";
        cout << " 4. Balik Stack   (Reverse)\n";
        cout << " 5. Keluar\n";
        cout << "----------------------------------------\n";
        cout << " Pilihan : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "\nMasukkan bilangan: ";
                cin >> nilai;

                if (push(S, nilai))
                    cout << "Berhasil menambahkan " << nilai << " ke stack.\n";
                else
                    cout << "Gagal! Stack sudah penuh.\n";
                break;

            case 2:
                if (pop(S, nilai))
                    cout << "\nNilai yang di-Pop: " << nilai << "\n";
                else
                    cout << "\nGagal! Stack masih kosong.\n";
                break;

            case 3:
                cout << "\n===== ISI STACK =====\n";
                printInfo(S);
                break;

            case 4:
                if (balikStack(S))
                    cout << "\nStack berhasil dibalik!\n";
                else
                    cout << "\nGagal membalik stack.\n";
                break;

            case 5:
                cout << "\nProgram selesai. Terima kasih!\n";
                break;

            default:
                cout << "\nPilihan tidak valid. Silakan coba lagi.\n";
        }

    } while (pilihan != 5);

    return 0;
}
