#include<iostream>
using namespace std;

int main(){
    int Nilai[20],Posisi[20];
    int i,n,Bil,jmlh=0;
    bool ketemu = false;

    cout << "Masukkan jumlah deret bilangan = ";
    cin >> n;
    cout << endl;

    for(i = 0;i < n; i++){
        cout << "Nilai bilangan ke-" << i << " = ";
        cin >> Nilai[i];
    }

    cout << "\nDeret Bilangan = ";
    for(i = 0;i < n; i++){
        cout << Nilai[i] << " ";
    }

    cout << endl;
    
    cout << "Masukkan bilangan yang ingin Dicari = ";
    cin >> Bil;

    for(i = 0; i < n; i++){
        if(Nilai[i] == Bil){
            ketemu = true;
            Posisi[jmlh]=i;
            jmlh++;
        }
    }

    if(ketemu){
        cout << "\nBilangan " << Bil << " ditemukan sebanyak " << jmlh << " kali";
        cout << "\npada indeks ke = ";
        for(i = 0; i < jmlh ; i++){
            cout << Posisi[i] << " ";
        }
    } else {
        cout << "\nMaaf, bilangan " << Bil << "tidak ditemukan";
    }

    cout << endl;
    return 0;
}