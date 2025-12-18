#include <iostream>
using namespace std;

int main(){
    int ilham, amir, *raka;
    ilham = 75;
    amir = ilham;
    raka = &ilham;
    cout << "Nilai Ilham: " << ilham << endl;
    cout << "Nilai Amir: " << amir << endl;
    cout << "Alamat Ilham: " << &ilham << endl;
    return 0;
}

// int main(){
//     int yofrie = 93;
//     int *hadriansyah;
//     cout << "nilai awal yofrie = " << yofrie << endl;
//     hadriansyah = &yofrie;
//     cout << "Nilai hadriansyah sekarang = " << *hadriansyah << endl;
//     *hadriansyah = 50;
//     cout << "Nilai hadriansyah sekarang = " << *hadriansyah << endl;
// }
// /* Pointer to Pointer */
// int main(){
//     int ilham;
//     int *raka;
//     int **amir;
//     int ***bob;

//     ilham = 75;
//     cout << "Nilai Ilham: " << ilham << endl;
//     raka = &ilham;
//     amir = &raka;
//     bob = &amir;

//     cout << "Nilai Raka Mengakses Ilham = " << *raka << endl;
//     cout << "Nilai Amir Mengakses Raka = " << **amir << endl;
//     cout << "Nilai Bob Mengakses Amir = " << ***bob << endl;
//     return 0;
// }