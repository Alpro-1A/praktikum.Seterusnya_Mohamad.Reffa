#include <iostream>

using namespace std;

    //Membuat Variabel
    int batas,
    TotalGanjil = 0,
    TotalGenap = 0,
    TotalPrima = 0;


void ganjil (int batas){
    cout << "Bilangan Ganjil antara 1 dan " << batas << " adalah : " ;
    for (int a = 1 ; a <= batas ; a++){
        if (a%2 !=0){
            cout << a << " ";
            TotalGanjil += a;
            }
        }
        cout << endl;
}

void genap (int batas){
    cout << "Bilangan Genap antara 1 dan " << batas << " adalah : " ;
    for (int b = 1 ; b <= batas ; b++){
        if (b%2 == 0){
            cout << b << " ";
            TotalGenap += b;
            }
        }
    cout << endl;
}

void prima (int batas){
    cout << "Bilangan Prima antara 1 dan " << batas << " adalah : " ;
    for (int c = 2 ; c <= batas ; ++c){

        int Bprima = 1;
        for (int d = 2; d * d <= c; ++d){
            if (c % d == 0){
                Bprima = 0;
                break;
            }
        }
        if (Bprima == 1){
        cout << c << " ";
        TotalPrima += c;
        }
       }
    cout << endl;
}

int faktor (int faktor){
    for (int g = 1; g <= faktor; g++) {
        if (faktor % g == 0) {
            cout << g << " ";
        }
}
}

int main (){
    //Menentukan Batasan
    cout << "Batas Bilangan : ";
    cin >> batas;
    cout << endl;

    //menampilkan bilangan ganjil
    ganjil(batas);
    //menampilkan bilangan genap
    genap(batas);
    //menampilkan bilangan prima
    prima(batas);
    //menampilkan jumlah bilangan ganjil
    cout << "Jumlah semua Bilangan Ganjil antara 1 dan " << batas << " adalah : " << TotalGanjil ;
    cout << endl;
    //menampilkan jumlah bilangan genap
    cout << "Jumlah semua Bilangan Genap antara 1 dan " << batas << " adalah : " << TotalGenap ;
    cout << endl;
    //menampilkan jumlah bilangan prima
    cout << "Jumlah semua Bilangan Prima antara 1 dan " << batas << " adalah : " << TotalPrima ;
    cout << endl;
    //menampilkan faktor bilangan ganjil
    cout << "Faktor Bilangan Ganjil antara 1 dan " << batas << " adalah : " ;
    faktor(TotalGanjil); cout << endl;
    //menampilkan faktor bilangan genap
    cout << "Faktor Bilangan Genap antara 1 dan " << batas << " adalah : " ;
    faktor(TotalGenap); cout << endl;
    //menampilkan faktor bilangan prima
    cout << "Faktor Bilangan Prima antara 1 dan " << batas << " adalah : " ;
    faktor(TotalPrima); cout << endl;