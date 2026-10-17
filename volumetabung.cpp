#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double jari_jari,tinggi,volume_tabung;

    cout << " Program Penghitung Volume Tabung " << endl;
    cout << "Masukkan jari-jari = ";
    cin >> jari_jari;
    cout << "\nMasukkan tinggi = ";
    cin >> tinggi;

    volume_tabung = M_PI*pow(jari_jari,2)*tinggi;
    cout << "Hasil Volume Tabung = " << volume_tabung << endl;
    return 0;
}