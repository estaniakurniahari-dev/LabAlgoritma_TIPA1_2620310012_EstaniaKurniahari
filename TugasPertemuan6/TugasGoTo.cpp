#include<iostream>
using namespace std;

int main() {
    int a,b;
    char lagi;

    do {
        cout << "Masukkan bilangan = ";
        cin >> a;
        b = a % 2;
        cout << "Nilai " << a << " % 2 adalah = " << b << endl;

        cout << "\nIngin Hitung Lagi [Y/T] : ";
        cin >> lagi;
    } while (lagi == 'Y' || lagi == 'y');
    return 0;
}