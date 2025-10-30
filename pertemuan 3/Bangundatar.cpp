#include<iostream>
using namespace std;

int main(){
    string nama; //ini gw buat nama dengan tipe datanya kalimat
    long NPM; //tipe data bilangan bulat versi leboh panjang jumlah angkanya dari int karena NPM
    int sisi,luas,keliling; //bikin sisi dan keliling dengan tipe data int untuk bilangan bulat
    cout << "Nama : "; 
    getline(cin,nama); //karena nama panjang kalimat itu perlu spasi

    cout<< "NPM : ";
    cin >> NPM; 

    cout << "Masukkan sisi: ";
    cin >> sisi;

    cout<< "Keliling persegi adalah 4 x sisi" << endl;
    cout << "Keliling persegi adalah : " << 4*sisi << endl; //ini keliling 4* sisi artinya 4 x sisi

    cout << "Luas persegi panjang adalah sisi x sisi" << endl;
    cout << "Luas persegi panjang adalah : <<" << sisi * sisi << endl; //ini luas sisi*sisi jadi * itu kali

    return 0;
}