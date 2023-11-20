#include <iostream>

using namespace std;

//Membuat Variabel
    int a,
    a1 = 0,
    a2 = 1,
    nexta;

int fibonacci (int a) {
    for (int i = 1; i <= (a - 2); i++){
        if(i == 1){ //mencetak deret pertama
            cout << a1 << " ";
        }
        if(i == 2){ //mencetak deret kedua
            cout << a2 << " ";
        }
        nexta = a1 + a2; //menghitung deret selanjutnya
        a1 = a2; //menukar nilai a1 menjadi a2
        a2 = nexta; //menukar nilai a2 menjadi nilai deret selanjutnya
        cout << nexta << " "; //menampilkan hasil deret selanjutnya
    }
        cout << endl;
}

int main(){
    //Menentukan jumlah suku deret fibonacci
    cout << "Masukan suku deret Fibonacci : ";
    cin >> a;
    fibonacci(a);
}