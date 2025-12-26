#include<iostream>
using namespace std;

struct Buku{
    string NamaBuku;
    string Penulis;
    string Penerbit;
    int TahunTerbit;
};
int main(){
    int n=2;

    cout << "Masukkan data buku sebanyak " << n << " buah:" << endl;
    Buku KoleksiBuku[n];               
    for(int i=0; i<n; i++){
        cout << "Buku ke-" << i+1 << endl;
        cout << "Nama Buku: ";
        cin.ignore();
        getline(cin, KoleksiBuku[i].NamaBuku);
        cout << "Penulis: ";
        getline(cin, KoleksiBuku[i].Penulis);
        cout << "Penerbit: ";
        getline(cin, KoleksiBuku[i].Penerbit);
        cout << "Tahun Terbit: ";
        cin >> KoleksiBuku[i].TahunTerbit;
    }
}
