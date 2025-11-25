#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

int main(){
    char a[99] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
    int len = strlen(a);
    for(int i = 0; i < len; i++){
    a[i] = tolower(a[i]);
    }

    for(int i = len - 1;i>= 0;i--){
        cout << a[i];
    }
}