#include <iostream>
using namespace std;

void swap(int arr[],int pos1,int pos2){
    int temp;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

int partition(int arr[], int low, int high, int pivot){
    int i = low;
    int j = low;
    while(i <= high){
        if(arr[i] > pivot ){
            i++;
        }
        else {
            swap(arr,i,j);
            i++;
            j++;
        }
    }
    return j-1;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pivot = arr[high];
        int pos = partition(arr,low,high,pivot);

        quickSort(arr, low, pos-1);
        quickSort(arr, pos+1, high);
    }
}

int main(){
    int data_nisn[7]={105,102,108,101,109,104,107};
    cout << "Urutan NISN sebelum disorting :";
    for(int i=0; i<7; i++){
        cout << data_nisn[i] << "\t";
    }
    cout << endl;
    quickSort(data_nisn, 0, 7-1);
    cout << "Urutan NISN setelah disorting: ";
    for(int i=0; i<7; i++){
        cout << data_nisn[i] << "\t";
    }
    cout << "\n";
}