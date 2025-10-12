#include<iostream>
using namespace std;

int main(){
    char kode;

    cout << "Masukkan Kode Barang [A/B/C] :";
    cin >> kode;

    switch(kode)   {
        case 'A':
            cout<<"Alat Olahraga"<<endl;
            break;
        case 'B':
            cout<<"Alat Elektronik"<<endl;
            break;
        case 'C':
            cout<<"Alat Masak"<<endl;
            break;
        default:
            cout<<"Anda Salah Memasukkan Kode"<<endl;
    }   
    getchar();
}