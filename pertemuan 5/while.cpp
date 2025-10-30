#include<iostream>
using namespace std;

int main(){
    int a,bil=1;

    cout << "Masukkan bilangan pembatas akhir = ";
    cin >> a;

    while(bil<=a){
        cout << bil << " ";
        bil ++;
    }
    cout << endl;
    getchar();
}