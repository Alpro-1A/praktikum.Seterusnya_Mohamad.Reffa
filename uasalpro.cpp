#include <iostream>
using namespace std;

// struktur penumpang
struct Penumpang {
    char nama[100];
    int umur;
};

// Variabel global
bool Maskapai_yang_ada[2] = {true}; // array buat nagsi tau maskapai yang ada
const int harga_Lion_Air = 1500000;
const int harga_Air_Asia = 1200000;

// Fungsi pesen maskapai
void pesen_maskapai(int nomer_maskapai) {
    Maskapai_yang_ada[nomer_maskapai - 1] = false;
}

// Fungsi yang ngembaliin nilai
int hitung_harga_tiket(int nomer_maskapai, int jumlah_tiket, int umur_penumpang) {
    int harga_tiket;

    if (nomer_maskapai == 1) {
        harga_tiket = harga_Lion_Air; // Harga tiket Lion Air
    } else if (nomer_maskapai == 2) {
        harga_tiket = harga_Air_Asia; // Harga tiket Air Asia
    } else {
        return 0; // Pilihan maskapai tidak valid
    }

    // Diskon 20% jika umur penumpang > 50 tahun
    if (umur_penumpang > 50) {
        harga_tiket = int(0.8 * harga_tiket); // Diskon 20%
    }

    return harga_tiket * jumlah_tiket;
}

// Fungsi yang ga ngembaliin nilai
void Menu_Pilihan() {
    // Variabel lokal 
    cout << "=======================================" << endl;
    cout << "================TIKET==================" << endl;
    cout << " 1. Pemesanan Tiket - Lion Air (Bali)  " << endl;
    cout << " 2. Pemesanan Tiket - Air Asia (Bangka)" << endl;
    cout << " 3. Keluar" << endl;
}

int main() {
    char pesanLagi; // Variabel lokal buat menentukan apakah ingin memesan lagi

    do {
        int pilihan = 0; // Atur nilai awal pilihan ke 0 atau -1
        int jumlahTiket; // Variabel lokal buat nyimpen jumlah tiket

        // Data pesanan
        Penumpang penumpang;
        int maskapai;
        int totalHarga;

        Menu_Pilihan();
        cout << "Pilih menu (1/2/3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                cout << "Masukkan nama penumpang: ";
                cin >> penumpang.nama;

                cout << "Masukkan umur penumpang: ";
                cin >> penumpang.umur;

                cout << "Masukkan jumlah tiket yang ingin dibeli: ";
                cin >> jumlahTiket;

                maskapai = 1;
                totalHarga = hitung_harga_tiket(maskapai, jumlahTiket, penumpang.umur);
                pesen_maskapai(maskapai);

                cout << "Pesanan atas nama " << penumpang.nama << " dengan maskapai " << maskapai << " total sebesar " << totalHarga << " IDR" << endl;
                break;
            }
            case 2: {
                cout << "Masukkan nama penumpang: ";
                cin >> penumpang.nama;

                cout << "Masukkan umur penumpang: ";
                cin >> penumpang.umur;

                cout << "Masukkan jumlah tiket yang ingin dibeli: ";
                cin >> jumlahTiket;

                maskapai = 2;
                totalHarga = hitung_harga_tiket(maskapai, jumlahTiket, penumpang.umur);
                pesen_maskapai(maskapai);

                cout << "Pesanan atas nama " << penumpang.nama << " dengan maskapai " << maskapai << " total sebesar " << totalHarga << " IDR" << endl;
                break;
            }
            case 3: {
                cout << "Arigatou. Program Owari." << endl;
                return 0;
            }
            default: {
                cout << "Pilihan salah. Pilih yang benar." << endl;
                break;
            }
        }

        // Tanya apakah ingin memesan lagi atau keluar
        cout << "Anda ingin pesan lagi? (y/n): ";
        cin >> pesanLagi;

        // Jika pengguna memilih 'n', keluar dari loop
        if (pesanLagi == 'n' || pesanLagi == 'N') {
            cout << "Program selesai." << endl;
            break;
        }

    } while (true);

    return 0;
}
