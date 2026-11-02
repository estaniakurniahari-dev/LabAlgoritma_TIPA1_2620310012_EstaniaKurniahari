#include<iostream>
using namespace std;

int main() {
    int a,m,n;

    cout << " Input tinggi segitiga : ";
    cin >> a;

    for (m=1;m<=a;m++) {
        for (n=1;n<=m;n++) {
        cout << " *";
    }
    cout << endl;
}
}