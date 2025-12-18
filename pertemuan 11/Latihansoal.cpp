#include<iostream>
using namespace std;

void pangkattiga(int *num);

int main() {
    int nilai;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> nilai;

    cout << "Nilai sebelum pemanggilan fungsi: " << nilai << endl;
    pangkattiga(&nilai);
    cout << "Nilai setelah pemanggilan fungsi: " << nilai << endl;

    return 0;
}

void pangkattiga(int *num) {
    *num = (*num) * (*num) * (*num);
    cout << "Nilai di dalam fungsi pangkattiga(): " << *num << endl;
}