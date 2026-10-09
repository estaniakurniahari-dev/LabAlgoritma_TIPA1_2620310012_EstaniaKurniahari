#include<iostream>
using namespace std;

int main(){
    
    string nama;
    string NPM;
    cout<<"Masukan nama anda :";
    getline(cin, nama);
    cout<<"\nMasukkan NPM anda :";
    getline(cin, NPM);
    cout<<"\nNama :"<<nama<<"\nNPM :"<<NPM;

    return 0;
}