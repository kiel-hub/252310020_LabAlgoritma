#include<iostream>
using namespace std;
struct Pegawai{
    string nama;
    string jabatan;
    int gaji;
};
int main(){
    int n;
    cout << "Masukkan jumlah pegawai: ";
    cin >> n;
    Pegawai pegawai[n];
    for(int i=0;i<n;i++){
        cout << "Masukkan nama pegawai ke-" << i+1 << ": ";
        cin >> pegawai[i].nama;
        cout << "Masukkan jabatan pegawai ke-" << i+1 << ": ";
        cin >> pegawai[i].jabatan;      
        cout << "Masukkan gaji pegawai ke-" << i+1 << ": ";
        cin >> pegawai[i].gaji;
    }
    int UMR = 5000000;
    cout << endl;
    cout << "Data pegawai:" << endl;
    cout << "Nama\tJabatan\tGaji\tKeterangan" << endl;
    for(int i=0;i<n;i++){
        cout << pegawai[i].nama << "\t" << pegawai[i].jabatan << "\t" << pegawai[i].gaji << "\t";
        if(pegawai[i].gaji < UMR){
            cout << "Gaji di bawah UMR" << endl;
        }
        else{
            cout << "Gaji di atas UMR" << endl;         
        }
    }
    return 0;
}