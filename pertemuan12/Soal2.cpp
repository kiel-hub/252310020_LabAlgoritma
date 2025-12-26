#include<iostream>
using namespace std;

struct KoleksiBuku{
    string NamaBuku;
    string Penulis;
    string Penerbit;
    int TahunTerbit;
};
int main(){
    KoleksiBuku buku1, buku2;
    buku1.NamaBuku = "Pemrograman C++";
    buku1.Penulis = "Budi Santoso";
    buku1.Penerbit = "Erlangga";
    buku1.TahunTerbit = 2015;       

    buku2.NamaBuku = "Struktur Data";
    buku2.Penulis = "Siti Aminah";
    buku2.Penerbit = "Andi Publisher";
    buku2.TahunTerbit = 2018;

    string cariJudul;
    cout << "Masukkan judul buku yang dicari: ";
    getline(cin >> ws,cariJudul);
    if(cariJudul == buku1.NamaBuku){
        cout << "Buku ditemukan!" << endl;
        cout << "Judul: " << buku1.NamaBuku << endl;
        cout << "Penulis: " << buku1.Penulis << endl;
        cout << "Penerbit: " << buku1.Penerbit << endl;
        cout << "Tahun Terbit: " << buku1.TahunTerbit << endl;
    } else if(cariJudul == buku2.NamaBuku){
        cout << "Buku ditemukan!" << endl;
        cout << "Judul: " << buku2.NamaBuku << endl;
        cout << "Penulis: " << buku2.Penulis << endl;
        cout << "Penerbit: " << buku2.Penerbit << endl;
        cout << "Tahun Terbit: " << buku2.TahunTerbit << endl;
    } else {
        cout << "Buku tidak ditemukan." << endl;
    }
    return 0;
}