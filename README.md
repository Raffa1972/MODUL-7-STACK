# Praktikum Struktur Data – Modul 7: Stack

Repository ini berisi implementasi praktikum Struktur Data Modul 7 tentang **Stack (Tumpukan)** menggunakan bahasa pemrograman C++.

## 📌 Deskripsi

Praktikum ini bertujuan untuk memahami konsep dan implementasi struktur data Stack dengan prinsip **LIFO (Last In, First Out)**, yaitu data yang terakhir dimasukkan akan menjadi data pertama yang dikeluarkan.

Terdapat dua implementasi Stack dalam praktikum ini:

1. Stack menggunakan Array.
2. Stack menggunakan Pointer (Singly Linked List).

## 📂 Struktur Folder

```text
MODUL-7-STACK/
│
├── Soal_1/
│   ├── main.cpp
│   ├── stack.cpp
│   └── stack.h
│
├── Soal_2/
│   ├── main.cpp
│   ├── stack.cpp
│   └── stack.h
│
├── .gitignore
└── README.md
```

## 📝 Pembahasan Praktikum

### Soal 1 – ADT Stack Array dan Pembalikan Isi

Implementasi Stack menggunakan array dengan kapasitas maksimal 20 elemen.

Fitur:
- `createStack()` – Membuat stack kosong.
- `isEmpty()` – Memeriksa apakah stack kosong.
- `isFull()` – Memeriksa apakah stack penuh.
- `push()` – Menambahkan elemen ke stack.
- `pop()` – Mengambil elemen dari TOP.
- `printInfo()` – Menampilkan isi stack.
- `balikStack()` – Membalik seluruh isi stack menggunakan stack bantu.

### Soal 2 – Stack Pointer dengan Penyisipan Terurut

Implementasi Stack menggunakan struktur Singly Linked List dengan pointer `Top`.

Fitur:
- `createStack()` – Membuat stack kosong.
- `isEmpty()` – Memeriksa kondisi stack.
- `alokasi()` – Membuat node baru menggunakan `new`.
- `dealokasi()` – Menghapus node menggunakan `delete`.
- `push()` – Menambahkan elemen ke TOP.
- `pop()` – Mengambil dan menghapus elemen TOP.
- `printInfo()` – Menampilkan isi stack.
- `pushAscending()` – Menambahkan elemen secara terurut sehingga nilai terbesar berada di TOP.
- `clearStack()` – Menghapus seluruh node.

## 🛠️ Teknologi

- Bahasa pemrograman: C++
- Code Editor: Visual Studio Code
- Compiler: GCC (g++)
- Version Control: Git dan GitHub

## ▶️ Cara Menjalankan Program

Pastikan compiler GCC sudah terpasang.

**Menjalankan Soal 1:**

```bash
cd Soal_1
g++ main.cpp stack.cpp -o program
./program
```

**Menjalankan Soal 2:**

```bash
cd Soal_2
g++ main.cpp stack.cpp -o program
./program
```

Untuk pengguna Windows, jalankan program dengan:

```powershell
.\program.exe
```

## 👨‍💻 Informasi Praktikum

| Keterangan | Detail |
|---|---|
| Mata Kuliah | Struktur Data |
| Modul | Modul 7 – Stack |
| Bahasa Pemrograman | C++ |
| Platform | Visual Studio Code |

---

**Repository:** MODUL-7-STACK

*Dibuat untuk memenuhi tugas praktikum mata kuliah Struktur Data.*
