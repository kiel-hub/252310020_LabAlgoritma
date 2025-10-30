#include <iostream>
using namespace std;

int main(){
    int tahun;
    cout << "Masukkan tahun : ";
    cin >> tahun;

    if((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        cout << "Tahun " << tahun << " adalah tahun kabisat" << endl;
    } else{
        cout << "Tahun " << tahun << " bukan tahun kabisat" <<endl;
    }

    return 0;
}