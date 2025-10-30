#include<iostream>
using namespace std;

int main(){
    int a,i,j,k;

    cout << "Masukkan jumlah baris = ";
    cin >> a;

    for (i = 1; i <= a; i++){
        for (j = 1; j <= a - i + 1; j++){
            cout << "* ";
        }
        for (k = 1; k < 2 * i - 1; k++){
            cout << "  ";
        }
        for (j = 1; j <= a - i + 1; j++){
            cout << "* ";
        }
        cout << endl;
    }

    for (i = 1; i <= a; i++){
        for (j = 1; j <= i ; j++){
            cout << "* ";
        }
        for (k = 1; k <= (2 * a) - (2 * i); k++){
            cout << "  ";
        }
        for (j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    getchar();
}