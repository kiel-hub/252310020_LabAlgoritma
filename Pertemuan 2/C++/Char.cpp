#include <iostream>
using namespace std;

int main()
{
    string y; 
    string z; 
    char x[40];

    cout << "Masukkan NPM Anda: ";
    cin >> x;
    cin.ignore();
    cout << "Masukkan Nama Anda: ";
    getline(cin,y);
    cout << "Masukkan Alamat Anda: ";
    getline(cin,z);

    cout << "NPM Anda adalah : " << x;
    cout << "\nNama Anda adalah : " << y;
    cout << "\nAlamat Anda adalah : " << z;

    return 0;
}

