#include<iostream>
#include<algorithm>

using namespace std;

const int N=100;
string buku[N];

int binarySearch(string x,int l,int r){
    if(r >= l){
        int mid = l + (r - l) / 2;

        if(buku[mid] == x)
            return mid;
        
        if(buku[mid] > x)
            return binarySearch(x, l, mid - 1);
        
        return binarySearch(x, mid + 1, r);
    }
    return -1;
}

int main(){
    int n;
    cout << "Masukkan jumlah buku : ";
    cin >> n;

    cin.ignore();

    for(int i=0;i<n;i++){
        cout << "Masukkan judul buku ke-" << i+1 << ": ";
        getline(cin, buku[i]);
    }

    sort(buku,buku + n);

    cout << "\nData Buku setelah diurutkan: ";
    for(int i=0;i<n;i++){
        cout << "Judul buku ke-" << i+1 << ": ";
        cout << buku[i] << "\n";
    }
    cout << endl;

    string x;
    cout << "Masukkan buku yang ingin dicari: ";
    getline(cin, x);

    int hasil = binarySearch(x, 0, n - 1);

    if(hasil == -1)
        cout << "Buku tidak ditemukan" << endl;
    else 
        cout << "Buku ditemukan pada indeks ke-" << hasil << endl;

    return 0;
}