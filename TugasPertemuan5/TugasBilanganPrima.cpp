#include<iostream>
using namespace std;

int main () {
    int a,i;
    int Modulus = 0;

    cout << "Masukkan sebuah bilangan = ";
    cin >> a;

    for (i=1;i<=a;i++) {
        if (a % i == 0) {
            Modulus++;
        }
    }
    if (Modulus == 2) {
        cout << "Termasuk Bilangan PRIMA" << endl;
    } else {
        cout << "Bukan termasuk bilangan prima" << endl;
    }
    return 0;
}