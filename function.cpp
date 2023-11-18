#include <iostream>
using namespace std;

void segitiga(int tinggi) {
    for (int i = 1; i <= tinggi; ++i) {
        //spasi
        for (int j = 1; j <= tinggi - i; ++j) {
            cout << ' ';
        }

        //bintang
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << '*';
        }
        cout << endl;
    }
}

int main() {
    int tinggi;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    segitiga(tinggi);

    return 0;
}
