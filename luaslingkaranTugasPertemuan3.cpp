#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int pilihan;
    double nilai,luas_lingkaran;

    cout << "Program Menghitung Luas Lingkaran" << endl;
    cout << "1. Diketahui jari jari (r) " << endl;
    cout << "2. Diketahui diameter (d) " << endl;
    cout << "Masukkan pilihan (1 atau 2) : " << endl;
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "\nMasukkan jari-jari = " << endl;
        cin >> nilai;

        luas_lingkaran = M_PI*pow(nilai,2);
        cout << "Hasil luas lingkaran = " << luas_lingkaran << endl;
    } else if (pilihan == 2) {
        cout << "Masukkan diameter = " << endl;
        cin >> nilai;

        luas_lingkaran = (1.0/4.0)*M_PI*pow(nilai,2);
        cout << "Hasil luas lingkaran = " << luas_lingkaran << endl;
    } else {
        cout << "Pilihan tidak valid." << endl;
    }
    return 0;
}
