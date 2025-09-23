#include <iostream>
using namespace std;
#define harga 4500.02 //...menentukan harga dengan jumlah

int main(){
    int jumlah;
    float total;

    cout << "Masukkan jumlah barang = " ;
    cin >> jumlah;
    total = harga * jumlah;
    cout << "\nYang harus dibayar = "<<total;

    return 0;
}