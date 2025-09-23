#include <iostream>
using namespace std;

struct Kontak {
    string nama;
    string telepon;
};

Kontak daftar[100];
int jumlahKontak = 0;

void menu() {
    cout << "\n1. Tambah Kontak\n2. Tampilkan Kontak\n3. Keluar\nPilih: ";
}

void tambahKontak() {
    if (jumlahKontak >= 100) {
        cout << "Daftar penuh!\n";
        return;
    }
    cout << "Nama: ";
    cin >> daftar[jumlahKontak].nama;
    cout << "Telepon: ";
    cin >> daftar[jumlahKontak].telepon;
    jumlahKontak++;
    cout << "Berhasil ditambah!\n";
}

void tampilkanKontak() {
    if (jumlahKontak == 0) {
        cout << "Kosong!\n";
        return;
    }
    for (int i = 0; i < jumlahKontak; i++) {
        cout << i+1 << ". " << daftar[i].nama << " - " << daftar[i].telepon << endl;
    }
}

int main() {
    int pilihan;
    
    while (true) {
        menu();
        cin >> pilihan;
        
        switch (pilihan) {
            case 1: tambahKontak(); break;
            case 2: tampilkanKontak(); break;
            case 3: return 0;
            default: cout << "Salah!\n";
        }
    }
}