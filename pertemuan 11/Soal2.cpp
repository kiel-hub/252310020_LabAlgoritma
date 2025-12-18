#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk membalik kalimat
string hasilKalimat(string kalimat) {
    string hasil = "";
    int i = kalimat.length() - 1;

    if(i >= 0) {
        hasil += kalimat[i];
        i = i - 1;
    } else {
        return hasil;
    }

}

int main() {
    string kalimat;
    string hasil;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    hasil = hasilKalimat(kalimat);

    cout << "Hasil: " << hasil << endl;

    return 0;
}

