#include<iostream>
using namespace std;

int main() {
    string nama_siswa;
    double nilai_rata_rata = 0;
    float nilai_I,nilai_II,nilai_III;

    cout << "Nama Siswa : ";
    getline(cin,nama_siswa);
    cout << "\nNilai Pertandingan I : ";
    cin >> nilai_I;
    cout << "\nNilai Pertandingan II : ";
    cin >> nilai_II;
    cout << "\nNilai Pertandingan III : ";
    cin >> nilai_III;

    nilai_rata_rata = (nilai_I + nilai_II + nilai_III) /3;
    cout << "Memperoleh nilai rata-rata " << nilai_rata_rata << " dari hasil perlombaan yang diikutinya. " << endl;
    
    if(nilai_rata_rata >= 85) {
        cout << "Hadiah yang didapat adalah Komputer Core i5" << endl;
    }
    else if(nilai_rata_rata >= 70) {
        cout << "Hadiah yang didapat adalah Uang sebesar Rp. 2.500,000" << endl;
    }
    else
        cout << "Hadiah yang didapat adalah Hiburan" << endl;
    return 0;
}
