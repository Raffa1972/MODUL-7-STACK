#include <iostream>
#include "stack.h"
using namespace std;

void createStack(Stack &S) {
    S.Top = 0;
}

bool isEmpty(const Stack &S) {
    return S.Top == 0;
}

bool isFull(const Stack &S) {
    return S.Top == MAX;
}

bool push(Stack &S, int x) {
    if (isFull(S)) {
        return false;
    }

    S.Top++;
    S.info[S.Top] = x;
    return true;
}

bool pop(Stack &S, int &x) {
    if (isEmpty(S)) {
        return false;
    }

    x = S.info[S.Top];
    S.Top--;
    return true;
}

void printInfo(const Stack &S) {
    if (isEmpty(S)) {
        cout << "Stack kosong.\\n";
        return;
    }

    cout << "TOP: ";
    for (int i = S.Top; i >= 1; i--) {
        cout << S.info[i] << " ";
    }
    cout << "\\n";
}

bool balikStack(Stack &S) {
    Stack bantu;
    createStack(bantu);

    // Pindahkan semua elemen ke stack bantu.
    while (!isEmpty(S)) {
        int x;
        pop(S, x);
        if (!push(bantu, x)) {
            return false;
        }
    }

    // Hasil pemindahan sudah terbalik di stack bantu.
    // Salin stack bantu ke stack utama agar urutan terbalik dipertahankan.
    S = bantu;
    createStack(bantu);

    return true;
}
