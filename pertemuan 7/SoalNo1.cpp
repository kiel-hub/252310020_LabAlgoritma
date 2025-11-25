#include<iostream>
using namespace std;

int main(){
    int i,hasil=0;

    for(i=2;i<=20;i++){
        if(i==20 && i%2==0){
            cout << i;
            hasil+=i;
        }
        else if(i%2==0){
            cout << i << " + ";
            hasil +=i;
        }
    }
    cout << " = " << hasil << endl;
}