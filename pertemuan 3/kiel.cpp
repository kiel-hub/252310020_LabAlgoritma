#include<iostream>
using namespace std;

int main(){
    string nama;
    long NPM;
    int sisi,luas,keliling;
    cout << "Nama : ";
    getline(cin,nama);

    cout<< "NPM : ";
    cin >> NPM;

    cout << "Masukkan sisi: ";
    cin >> sisi;

    cout<< "Keliling persegi adalah 4 x sisi" << endl;
    cout << "Keliling persegi adalah : " << 4*sisi << endl;

    cout << "Luas persegi panjang adalah sisi x sisi" << endl;
    cout << "Luas persegi panjang adalah : <<" << sisi * sisi << endl;

    return 0;
}