
#include <iostream>
#include <new>
#include "stack.h"
using namespace std;

// Membuat stack kosong
void createStack(Stack &S) {
    S.Top = nullptr;
}

// Memeriksa stack kosong
bool isEmpty(const Stack &S) {
    return S.Top == nullptr;
}

// Membuat node baru
Node* alokasi(int x) {
    Node *P = new (nothrow) Node;

    if (P != nullptr) {
        P->info = x;
        P->next = nullptr;
    }

    return P;
}

// Menghapus node
void dealokasi(Node *P) {
    delete P;
}

// Menambahkan elemen ke TOP
bool push(Stack &S, int x) {
    Node *P = alokasi(x);

    if (P == nullptr)
        return false;

    P->next = S.Top;
    S.Top = P;

    return true;
}

// Mengambil elemen dari TOP
bool pop(Stack &S, int &x) {
    if (isEmpty(S))
        return false;

    Node *P = S.Top;
    x = P->info;

    S.Top = P->next;
    dealokasi(P);

    return true;
}

// Menampilkan isi stack
void printInfo(const Stack &S) {
    if (isEmpty(S)) {
        cout << "Stack kosong.\n";
        return;
    }

    Node *P = S.Top;

    cout << "TOP: ";

    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }

    cout << "\n";
}

// Menambahkan elemen secara terurut
bool pushAscending(Stack &S, int x) {
    Stack bantu;
    createStack(bantu);

    int nilai;

    // Memindahkan nilai yang lebih besar ke stack bantu
    while (!isEmpty(S) && S.Top->info > x) {
        pop(S, nilai);

        if (!push(bantu, nilai)) {
            push(S, nilai);

            while (pop(bantu, nilai))
                push(S, nilai);

            return false;
        }
    }

    // Memasukkan nilai baru
    if (!push(S, x)) {
        while (pop(bantu, nilai))
            push(S, nilai);

        return false;
    }

    // Mengembalikan elemen dari stack bantu
    while (pop(bantu, nilai)) {
        if (!push(S, nilai))
            return false;
    }

    return true;
}

// Menghapus seluruh isi stack
void clearStack(Stack &S) {
    int nilai;

    while (pop(S, nilai)) {
        // Node dihapus melalui operasi pop
    }

    S.Top = nullptr;
}
