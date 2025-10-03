#include <iostream>
using namespace std;

float volumetabung(float pi,int r,int t){
    float pangkat = 2;
    float r2=pow(r,pangkat);
    return pi * r2 * t;

}
int main (){
    float pi=3.14;
    int r,t;
    cout << "V = π × r² × t" << endl;
    cout << "Masukkan jari - jari : ";
    cin >> r;

    cout << "Masukkan tinggi : ";
    cin >> t;

    float hasil = volumetabung(pi,r,t);

    cout << "V = " << pi << "*" << r << "^2" << "*" << t <<endl;
    cout << "Hasil volume dari tabungnya adalah : "<< hasil <<endl;

}

