#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Masukkan x: ";
    cin >> x;

    if(x%2==0){
        cout << x << " adalah bilangan genap" << endl;
    } else
        cout << x << " adalah bilangan ganjil" << endl; 
    
    return 0;
}