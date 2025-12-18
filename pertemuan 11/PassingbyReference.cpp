/* ---------------------------- */
/* Penggunaan Call By Reference */
 /* Program Tambah Nilai */
/* --------------------------- */

#include<stdio.h>
#include<iostream>
using namespace std;

void tambah(int *c, int *d);

int main()
{
    int a, b;
    a =4;
    b=6;
// clscr();
    cout << "Nilai a sebelum pemanggilan fungsi : " << a << endl;
    cout << "\na = " << a << " b = " << b;
    tambah(&a, &b);
    cout << "\nNilai setelah pemanggilan fungsi : ";
    cout << "\na = " << a << " b = " << b; 
    return 0;
}

void tambah(int *c, int *d)
{
    *c += 7;
    *d +=5;
    cout << endl;
    cout << "Nilai di Akhir Fungsi Tambah()";
    cout << "\nc = " << *c << " d = " << *d << endl;
}