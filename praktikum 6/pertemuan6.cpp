#include <iostream>

int main() {
    using namespace std;

    int ukuran;
    cout << "Masukkan ukuran array: ";
    cin >> ukuran;

    if (ukuran <= 0) {
        cout << "Array 0 tidak valid. bukan nilai tertinggi." << endl;
        return 0;
    }

    int arr[ukuran];

    cout << "Masukkan elemen array:" << endl;
    for (int i = 0; i < ukuran; ++i) {
        cout << "Elemen ke-" << i << ": ";
        cin >> arr[i];
    }

    int nilai_tertinggi = arr[0];
    int indeks = 0;

    for (int i = 1; i < ukuran; ++i) {
        if (arr[i] > nilai_tertinggi) {
            nilai_tertinggi = arr[i];
            indeks = i;
        }
    }

    cout << "Nilai tertinggi adalah " << nilai_tertinggi << " pada indeks " << indeks << "." << endl;

    return 0;
}
