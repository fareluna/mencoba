#include <iostream>
using namespace std;

void tukar(int *x, int*y) {
    int z = *x;
    *x = *y;
    *y = z;
}

void change(string *x, string*y) {
    string z = *x;
    *x = *y;
    *y = z;
}

int main() {
    int n;
    string produk[100];
    int harga[100];

    cout << "Masukkan jumlah produk : "; 
    cin >> n;

    for (int i = 0; i < n ; i++) {
        cout << "\nProduk ke-" << i + 1 << ": ";
        cin.ignore();
        getline(cin, produk[i]);
        cout << "Harga " << produk[i] << ": Rp";
        cin >> harga[i];
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (harga[j] > harga[j+1]) {
                tukar(&harga[j], &harga[j+1]);
                change(&produk[j], &produk[j+1]); 
            }
        }
    }

    cout << "\nDaftar produk dari yang termurah :\n";
    for (int i=0; i<n; i++) {
        cout << i+1 << ". " << produk[i] << " - Rp" << harga[i] << endl;
    }

    return 0;
}