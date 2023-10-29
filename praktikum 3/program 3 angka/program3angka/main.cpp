#include <iostream>
using namespace std;

int main() {
    int angka1, angka2, angka3;

    // Meminta pengguna memasukkan tiga angka
    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    cout << "Masukkan angka ketiga: ";
    cin >> angka3;

    // Menentukan angka terbesar
    int terbesar = angka1;

    if (angka2 > terbesar) {
        terbesar = angka2;
    }

    if (angka3 > terbesar) {
        terbesar = angka3;
    }

    // Menampilkan hasil
    cout << "Angka terbesar di antara ketiga angka adalah: " << terbesar << endl;

    return 0;
}
