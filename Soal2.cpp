#include <iostream>
using namespace std;

int main(){
    int i,hasil=0;

    for(i=1;i<=20;i++){
        if(i % 2 == 1){
        cout << i << " + ";
        hasil += i;
        }
    }
    cout << "= " << hasil << endl;
}