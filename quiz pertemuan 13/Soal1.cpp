#include<iostream>
using namespace std;

int main(){
    string data[3][3];
    int i=0,n=0;
    string nama, NPM;

    for(int i=0;i<3;i++){
        cout << "Masukkan NPM ke - "<< i+1 << ":";
        cin >> NPM;
        data[n][i] = NPM;
    }
    n=1;    
    for(int i=0;i<3;i++){
        cout << "Masukkan nama ke - " << i+1 << ":";
        cin >> nama;
        data[n][i] = nama;
    }
    cout << endl;  
    cout << "Data yang dimasukkan:" << endl;
    cout << "Nama" << "\t " << "NPM" << endl;
    for(int i=0;i<3;i++){
        cout << data[1][i] << "\t " << data[0][i] << endl; 
    }
    return 0;
}