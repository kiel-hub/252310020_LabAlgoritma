#include<iostream>
using namespace std;

int main(){
    string siswa;
    int nilai1,nilai2,nilai3;
    cout << "Nama Siswa : ";
    getline(cin,siswa);
    cout<< "Nilai Pertandingan I : ";
    cin >> nilai1;
    cout<< "Nilai Pertandingan II : ";
    cin >> nilai2;
    cout<< "Nilai Pertandingan III : ";
    cin >> nilai3;

    int ratarata = (nilai1+nilai2+nilai3)/3;
    cout << "Siswa yang bernama" <<  siswa <<endl;
    cout << "Memperoleh nilai - rata - rata " << ratarata << " dari hasil perlombaan yang diikutinya" <<endl;

    if (ratarata >= 85){
        cout << "Hadiah yang didapat adalah Komputer Core i5" << endl;
    } else {
        if(ratarata >= 70){
        cout << "Hadiah yang didapat adalah uang sebesar Rp. 2.500,000" << endl;
    } else {
        cout << "Hadiah yang didapat adalah hiburan" << endl;
    }
    getchar();
    } 
}