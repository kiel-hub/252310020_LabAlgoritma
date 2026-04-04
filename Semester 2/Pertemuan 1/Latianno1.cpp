#include<iostream>
using namespace std;

void bubbleSortbuku(string arr[], int n){
    string tmp;
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
int main(){
    string array[100];
    int n, i ,j;
    cout << "Masukkan berapa jumlah buku yang mau kamu input: ";
    cin >> n;
    cin.ignore();
    for(i=0; i<n; i++){
        cout << "Masukkan nama buku ke- "<< i+1 << " : ";
        getline (cin,array[i]);
    }
    cout << endl;
    cout << "Buku sebelum diurutkan: " << endl;
    for(i=0; i<n; i++){
        cout << "Buku ke -" << i+1 << ":" << array[i] << " ";
        cout << endl;
    }
    cout << endl;
    bubbleSortbuku(array, n);
    cout << "Buku setelah diurutkan: " << endl;
    for(i=0; i<n; i++){
        cout << "Buku ke- " << i+1 << ": " << array[i] << " ";
        cout << endl;
    }
    cout << endl;
    return 0;
}