#include <iostream>
#include <string>
using namespace std;

//variabel  global
int HargaAkhir = 0;
int orang;


//struct global
// untuk menampung data penumpang
struct Penumpang {
    string name;
    string tujuan;
    int kode;
    int kelas;
    int harga;
    string jk;
    string kls;
};

//function tidak mengembalikan nilai
//untuk melakukan input data penumpang
void isidata(Penumpang arr[], int size){
    for (int i = 0; i < size; i++){
            cout << "Masukan Nama           : " ; cin.ignore(); getline(cin,arr[i].name);
            cout << "Masukan Kode Tujuan    : " ; cin >> arr[i].kode;
            cout << "Masukan Kode Kelas     : " ; cin >> arr[i].kelas;
            cout << "Jenis Kelamin (L/P)    : " ; cin >> arr[i].jk;
            cout << "=============================================================================" << endl;
        }
};

//function tidak mengembalikan nilai
//untuk menentukan harga tiket setiap penumpang
void Hrg(Penumpang arr[], int size){
    //loop dan switch case
    for (int i = 0; i < size; i++){
        switch(arr[i].kode){
        case 1 :
            arr[i].harga = 2000000;
            arr[i].tujuan = "Bali";
            break;
        case 2 :
            arr[i].harga = 3000000;
            arr[i].tujuan = "Medan";
            break;
        case 3 :
            arr[i].harga = 1500000;
            arr[i].tujuan = "Surabaya";
            break;
        case 4 :
            arr[i].harga = 2500000;
            arr[i].tujuan = "Lombok";
            break;
        case 5 :
            arr[i].harga = 2250000;
            arr[i].tujuan = "Batam";
            break;
        }
        switch(arr[i].kelas){
        case 1 :
            arr[i].harga = arr[i].harga;
            arr[i].kls = "Ekonomi";
            break;
        case 2 :
            arr[i].harga = (arr[i].harga * 125 ) / 100;
            arr[i].kls = "Bisnis";
            break;
        case 3 :
            arr[i].harga = (arr[i].harga * 150 ) / 100;
            arr[i].kls = "First Class";
            break;
        }
    }
};

//function mengembalikan nilai
//untuk menentukan harga total
int total(Penumpang arr[], int hargasemua, int size){
    //loop
    for (int i = 0; i < size ; i++){
        hargasemua += arr[i].harga ;
    };
    return hargasemua;
};

//function tidak mengembalikan nilai
//output hasil pembelian penumpang
void tampildata(Penumpang arr[], int size){
    //loop dan kondisi bertingkat
    for (int i = 0; i < size; i++){
            if (arr[i].jk == "l" || arr[i].jk == "L"){
                arr[i].jk = "Laki-Laki" ;
            } else if (arr[i].jk == "p" || arr[i].jk == "P"){
                arr[i].jk = "Perempuan" ;
            }else {
                arr[i].jk = "Tidak Diketahui" ;
            }
            cout << "Penumpang ke-" << i+1 << " Nama : " << arr[i].name <<", Tujuan : " << arr[i].tujuan << ", Kelas : " << arr[i].kls << ", Harga : " << arr[i].harga << "IDR" << ", Jenis Kelamin : " << arr[i].jk << endl ;
        }
        cout << endl;
};

int main()
{
    //variabel lokal
    char ulang;

    //loop
    do {
    char beli;

    //menampilkan menu tiket pesawat
    cout << "\nINFORA Airport" << endl;
    cout << "---------------" << endl << endl;

    cout << "Kode Tujuan " << "   Tujuan  " << " Harga Tiket   " << "         Kelas        " << endl;
    cout << "    1       " << "    Bali   " << " Rp. 2.000.000 " << " 1.Ekonomi (+0%)      " << endl;
    cout << "    2       " << "    Medan  " << " Rp. 3.000.000 " << "                      " << endl;
    cout << "    3       " << "  Surabaya " << " Rp. 1.500.000 " << " 2.Bisnis (+25%)      " << endl;
    cout << "    4       " << "   Lombok  " << " Rp. 2.500.000 " << "                      " << endl;
    cout << "    5       " << "   Batam   " << " Rp. 2.250.000 " << " 3.First class (+50%) " << endl;

    cout << endl;


    cout << "Mau Beli Tiket Pesawat (Y/N) ? "; cin >> beli;

    //kodisional
    //menentukan client akan membeli atau tidak
    if (beli == 'Y' || beli == 'y'){
            //menentukan jumlah tiket untuk melakukan perulangan input data
            cout << "Jumlah Tiket Pesawat? "  ; cin >> orang;
            cout << "=============================================================================" << endl;
            //array
            Penumpang org[orang];
            //memanggil function input data
            isidata(org, orang);
            //memanggil function untuk menghitung harga tiket
            Hrg(org, orang);
            //memanggil function output data penumpang
            tampildata(org, orang);
            //memanggil function harga total
            cout << "Total Harga : " << total(org, HargaAkhir, orang) << "IDR";
            cout << endl << endl;
            //menentukan apakah ingin membeli lagi
            cout << "Mau melakukan transaksi lagi ?"; cin >> ulang ; cout << endl;

    }else{
    cout << endl << "Terima Kasih Telah mengunjungi program kami " << endl;
    };
    }while(ulang == 'Y' || ulang == 'y'); //program akan diulang jika pembeli ingin membeli lagi
    if (ulang == 'T' || ulang == 't'){
        cout  << "Terima Kasih Telah melakukan transaksi Semoga Perjalananmu Lancar " << endl;
    }
}
