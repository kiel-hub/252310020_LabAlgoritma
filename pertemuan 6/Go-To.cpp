#include <iostream>
using namespace std;

int main(){
    char ulang;

    awal:
    cout << "Program perulangan menggunakan go to" << endl;
    cout <<endl;

    cout << "Ingin mengulang perintah(y/n) ? ";
    cin >> ulang;

    cout << endl;

    if (ulang=='Y'||ulang=='y'){
        goto awal;
    }
    if(ulang=='N'||ulang=='n'){
        goto akhir;
    }
    akhir:

    return 0;
}