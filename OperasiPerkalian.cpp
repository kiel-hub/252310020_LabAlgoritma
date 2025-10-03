#include<iostream>
using namespace std;

int main(){
    int a,b,c=0,d=0;
    //clrscr();
    cout << "Operasi Perkalian" << endl;

    cout << "Masukkan nilai A = ";
    cin >> a;

    cout <<"Masukkan nilai B = ";
    cin >> b;

    c = a % b;
    d = a * b;

    cout << "Hasil dari C = A % B = " << c << endl;
    cout << "Hasil dari D = A * B" << d << endl;
    getchar(); 
}