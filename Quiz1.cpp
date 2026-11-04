#include<iostream>
using namespace std;

int main() {
    int pilihan, bil;

    do {
        cout << endl;
    cout << "\n========== Selamat Datang ==========";
    cout << "\n 1. Tentukan Bilangan Genap/Ganjil";
    cout << "\n 2. Tentungan Bilangan Prima";
    cout << "\n 0. Hentikan Program" << endl;
    cin >> pilihan;
    
    if(pilihan == 1) {
        cout << "========== Menu Bilangan Genap/Ganjil ==========\n";
        cout << "Masukkan Bilangan : ";
        cin >> bil;

        if(bil % 2 == 0) {
            cout << "Merupakan Bilangan Genap";
        } else {
            cout << "Merupakan Bilangan Ganjil";
        }
    }
    if (pilihan == 2) {
        int bil_b, c, i;

        cout << "========= Menu Bilangan Prima ==========\n";
        cout << "Masukkan Bilangan : ";
        cin >> bil_b;
        c = 0;

        for(i = 1; i <= bil_b; i++) {
            if (bil_b % i == 0) {
                c++;
            }
        }
        if (c == 2) {
            cout << bil_b << " Merupakan Bilangan Prima\n";
        } else {
            cout << bil_b << " Bukan Bilangan Prima\n";
        }
    }
} while (pilihan != 0);
}