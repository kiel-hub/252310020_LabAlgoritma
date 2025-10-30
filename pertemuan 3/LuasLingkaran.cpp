#include <iostream>
#include <cmath>
using namespace std;
float LuasLingkaran(float pi,int r){
    float pangkat=2.0;
    float r2=pow(r,pangkat);
    return pi * r2;
}
int main(){
    int r;
    float pi=3.14;

    cout << "Masukkan jari - jari : ";
    cin >> r;

    cout << "Jari - jarinya adalah " << r <<endl;

    float hasil = LuasLingkaran(pi,r);

    cout<< "Luas = pi x r^2"<<endl;
    cout<< "Luas = "<< pi << "*" << r << "^2" << endl;
    cout << "Hasil luas lingkarannya adalah : "<< hasil << endl;
    return 0;

}