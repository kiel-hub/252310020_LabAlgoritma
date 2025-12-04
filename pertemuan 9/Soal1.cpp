#include <iostream>
using namespace std;

int main() {
    int r, c, a[100][100], b[100][100], sum[100][100],kurang[100][100],kali[100][100], i, j;

    cout << "Masukkan jumlah baris (1 - 100): ";
    cin >> r;

    cout << "Masukkan jumlah kolom (1 - 100): ";
    cin >> c;

    cout << endl << "Masukkan matriks pertama:" << endl;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "Matriks a[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
        }
    }

    cout << endl << "Masukkan matriks kedua:" << endl;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "Matriks b[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> b[i][j];
        }
    }

    // Proses penjumlahan matriks
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << endl << "Hasil penjumlahan matriks:" << endl;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    //Proses Pengurangan
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            kurang[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << endl << "Hasil pengurangan matriks:" << endl;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << kurang[i][j] << " ";
        }
        cout << endl;
    }

    //Proses Perkalian
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            kali[i][j] = a[i][j] * b[i][j];
        }
    }

    cout << endl << "Hasil perkalian matriks:" << endl;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << kali[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}