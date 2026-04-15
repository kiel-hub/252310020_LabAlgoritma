#include<iostream>
#include<algorithm>

using namespace std;

int binarySearch(int x,int l,int r,int *arr){
    if(r >= l){
        int mid = l + (r - l) / 2;

        if(arr[mid] == x){
            return mid;
        }
        
        if(arr[mid] > x){
            return binarySearch(x, l, mid - 1,arr);
        }
        return binarySearch(x, mid + 1, r, arr);
    }
    return -1;
}

int main(){
    int n = 5;
    int arr[]={0,6,12,18,24};
    int data;
   
    sort(arr,arr + n);

    cout << "Masukkan data yang ingin dicari: ";
    cin >> data;

    int tm=0,R=n-1,L=0;

    int hasil = binarySearch(data, tm, R, arr);

    if(hasil == -1)
        cout << "bilangan tidak ditemukan" << endl;
    else 
        cout << "bilangan ditemukan pada array ke" << hasil << endl;

    return 0;
}