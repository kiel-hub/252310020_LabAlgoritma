#include <iostream>
using namespace std;

int main(){
    int bil,a=0,b=0,c=0,i=1;
    cout << "Masukkan jumlah suku Fibonnaci : ";
    cin >> bil;

    cout << "Deret Fibonacci : ";

    while(bil>=i){
        cout << c << " ";
    if(c!=0){
        c = a+b;
    }
    else {
    c=1;
    }
        a=b;
        b=c;
        i++;
    }
    cout << endl;
}