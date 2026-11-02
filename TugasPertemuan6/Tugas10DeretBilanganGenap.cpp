#include<iostream>
using namespace std;

int main() {
    int genap = 0;

    for (int i = 2; i <= 20; i += 2) {
        cout << i;
        if (i<20) {
            cout << " + ";
        }
        genap = genap + i;
    }
    cout << " = " << genap << endl;
}