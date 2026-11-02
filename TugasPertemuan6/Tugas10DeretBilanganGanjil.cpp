#include<iostream>
using namespace std;

int main() {
    int ganjil = 0;

    for (int i = 1; i <= 19; i+=2) {
        cout << i;
        if (i<19) {
            cout << " + ";
        }
        ganjil = ganjil + i;
    }

    cout << " = " << ganjil << endl;
    return 0;
}