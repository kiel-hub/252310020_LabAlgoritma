#include<iostream>
using namespace std;

int main(){
    int bil,i,faktorial;
    string ulangi;
    do{
        i=1,faktorial = 1;
        cout << "Masukkan bilangan : ";
        cin >> bil;
        while (i<=bil){
            faktorial*=i;
            i++;
        }
        cout << "Hasil " << bil << "! :" << faktorial << endl;
        cout << "Ulangi(y/n) : ";
        cin >> ulangi;
    } while(ulangi == "y" || ulangi == "Y");
}