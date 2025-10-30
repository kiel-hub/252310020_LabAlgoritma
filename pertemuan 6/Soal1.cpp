#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int a,b;
    char lagi;
    atas:
    cout << "Masukkan Bilangan = ";
    cin >> a;
    b = a % 2;
    cout << "Nilai "<< a << "% 2 adalah = " << b;
    printf("\n\nIngin Hitung Lagi[Y/T] : ");
    cin >> lagi;
    if(lagi == 'Y' || lagi == 'y')
    goto atas;
}
