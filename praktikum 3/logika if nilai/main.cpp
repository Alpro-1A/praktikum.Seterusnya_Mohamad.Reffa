#include <iostream>

#include<iostream>
using namespace std;

int main() {
    int score;
    cout << "Masukkan nilai score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Selamat Anda mendapatkan nilai A" << endl;
    } else if (score >= 80 && score <= 89) {
        cout << "Selamat Anda mendapatkan nilai B" << endl;
    } else if (score >= 70 && score <= 79) {
        cout << "Selamat Anda mendapatkan nilai C" << endl;
    } else if (score >= 60 && score <= 69) {
        cout << "Selamat Anda mendapatkan nilai D" << endl;
    } else {
        cout << "Selamat Anda mendapatkan nilai E" << endl;
    }

    return 0;
}
