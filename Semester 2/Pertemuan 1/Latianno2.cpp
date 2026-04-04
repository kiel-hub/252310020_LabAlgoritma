#include <iostream>
using namespace std;

void bubbleSort(int arr[8]){
    int i,j,temp=0;
    for(i=0; i<8 ; i++){
        for(j=0; j<8-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
}
int main(){
    int i, j;
    int array[10] = {13,4,7,2,1,8,6,3};
    cout << "Urutan bilangan sebelum di sort: ";
    cout << endl;
    for(i=0; i<8; i++){
        cout << array[i] << " ";
    }
    bubbleSort(array);
    cout << endl;
    cout << "Urutan bilangan setelah di sort: ";
    cout << endl;
    for(i=0; i<8; i++){
        cout << array[i] << " ";
    }
}