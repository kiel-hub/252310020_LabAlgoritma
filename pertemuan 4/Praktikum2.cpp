#include<iostream>
using namespace std;

int main(){
    int A,B;
    cout << "Masukkan A: ";
    cin >> A;

    cout << "Masukkan B: ";
    cin >> B;

    if(A>B){
        cout << "A-B = " << A-B << endl;
    } else if(A<B){
        cout << "B-A = "<< B-A << endl;
    } else if(A==B){
        cout << "A+B = " << A+B << endl;
    }
}