#include<iostream>
using namespace std;

int main(){
    int x,y,tambah,kurang,bagi,kali;

    cout<< "Masukkan bilangan kesatu = ";
    cin>> x;
    cout<< "Masukkan bilangan kedua = ";
    cin>> y;

    tambah = x+y;
    kurang = x-y;
    bagi = x/y;
    kali = x*y;

    cout<<"Jadi hasil penjumlahannya adalah = "<<tambah<<endl;
    cout<<"Jadi hasil pengurangannya adalah = "<<kurang<<endl;
    cout<<"Jadi hasil pembagiannya adalah = "<<bagi<<endl;
    cout<<"Jadi hasil perkaliannya adalah = "<<kali<<endl;
}