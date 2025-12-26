#include<iostream>
using namespace std;

struct Mahasiswa{
    string Nama;
    string Kelas;
    int NPM;
    float ipk;
}Helena, Antoni;

int main(){
    // Helena.Nama = "Helena Jemima";
    // Antoni.NPM = 242310024;

    // cout<<Helena.Nama<<endl
    //     <<Antoni.NPM<<endl;

    // Mahasiswa Joshua;
    // Joshua.Nama = "Joshua";
    // Joshua.NPM = 252310001;

    // cout<<Joshua.Nama<<endl
    //     <<Joshua.NPM<<endl;

    // Mahasiswa Daffa{"Daffa W", "TI-23-PA", 232310036, 3.89};
    // cout << Daffa.Nama << endl;
    Mahasiswa TI[3];
    TI[0].Nama = "Charlos";
    TI[0].NPM = 252310025;

    TI[1].Nama = "Rhainy";
    TI[1].NPM = 252310026;

    TI[2].Nama = "Wili";
    TI[2].NPM = 252310024;

    for(int i = 0; i < 3; i++){
        cout << TI[i].Nama <<endl
             << TI[i].NPM <<endl;
    }

    return 0;
}