#include <iostream>
using namespace std;

int main(){
    int nilai[5];
    int total = 0;
    int terbesar=0,terkecil=0;

    cout << "Masukkan 5 nilai mahasiswa: ";
    for(int i = 0; i < 5; i++){
        cin >> nilai[i];
        total += nilai[i];
    }

    cout << "\nDaftar nilai mahasiswa:" << endl;
    for (int i = 0; i < 5; i++){
        cout << "Nilai ke-" << i + 1 << " = " << nilai[i] << endl;
        terbesar=nilai[0];
        terkecil=nilai[0];

        if(nilai[i] > terbesar)
        terbesar = nilai[i];
        if (nilai[i] < terkecil)
        terkecil = nilai[i];
    }

    float rataRata = (float)total / 5;
    cout << "\nRata-rata nilai = " << rataRata << endl;

    cout << "Nilai tertinggi adalah :" << terbesar << endl;
    cout << "Nilai terendah adalah : " << terkecil << endl;
    if(rataRata>=80){
        cout << "Baik Sekali" << endl;
    }
    else if(rataRata>=70 && rataRata<=79){
        cout << "Baik" << endl;
    }
    else if(rataRata>=70 && rataRata<=79){
        cout << "Cukup" << endl;
    } 
    else if(rataRata<60){
        cout << "Kurang" << endl;
    }
}