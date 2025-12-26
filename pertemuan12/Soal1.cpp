#include<iostream>
using namespace std;

struct nilaiMahasiswa {
    char nama[50];
    int tugas;
    int UTS;
    int praktikum;
    int UAS;
};

int main() {
    float rataRata;
    nilaiMahasiswa mahasiswa;
    cout << "Masukkan nama mahasiswa: ";
    cin.getline(mahasiswa.nama, 50);
    cout << "Masukkan nilai tugas: ";
    cin >> mahasiswa.tugas;
    cout << "Masukkan nilai UTS: ";
    cin >> mahasiswa.UTS;                   
    cout << "Masukkan nilai praktikum: ";
    cin >> mahasiswa.praktikum;
    cout << "Masukkan nilai UAS: ";
    cin >> mahasiswa.UAS;

    rataRata = (mahasiswa.tugas + mahasiswa.UTS + mahasiswa.praktikum + mahasiswa.UAS) / 4.0;
    cout << "Rata-rata nilai " << mahasiswa.nama << " adalah: " << rataRata << endl;

    if(rataRata >= 90) {
        cout << "Nilai A" << endl;
    } else if(rataRata <= 89 && rataRata >= 80) {
        cout << "Nilai B" << endl;
    } else if(rataRata <= 79 && rataRata >= 70) {
        cout << "Nilai C" << endl;
    } else if(rataRata <= 69 && rataRata >= 60) {
        cout << "Nilai D" << endl;
    } else if (rataRata <= 59) {
        cout << "Nilai E" << endl;
    }

    return 0;
}

