#include<iostream>
#include<string>
using namespace std;

int main () {
    string nama = "Esta";
    string kampus = "IBI Kesatuan Bogor";

    cout << "Halo " << nama << " selamat siang!" << endl;
    if (kampus == "IBI Kesatuan Bogor") {
    cout << "Halo teteh!" << endl;
    }
    else  {
        cout << "Halo kakak!" << endl;
    }

    return 0;
}