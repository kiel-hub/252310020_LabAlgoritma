#include<iostream>
using namespace std;

int tukarbilangan(int *a, int *b);

int main() {
    cout << "Masukkan dua bilangan bulat: "<< endl;
    int x, y;
    cout << "Masukkan x :" << endl;
    cin >> x;
    cout << "Masukkan y :" << endl;
    cin >> y;

    cout << "Sebelum penukaran: " << endl;
    cout << "x = " << x << ", y = " << y << endl;

    tukarbilangan(&x, &y);

    cout << "Setelah penukaran: " << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}   

int tukarbilangan(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}