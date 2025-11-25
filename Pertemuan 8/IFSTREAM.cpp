#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream myfile;
    char sv_text;
    myfile.open("Test.exe");

    cout << "OPERASI FILE 2" << endl;
    cout << "--------------" << endl;

    if(!myfile.fail())
    {
        cout << "Isi dari File Test.exe adalah" << endl;
        while(!myfile.eof()){
        myfile.get(sv_text);
        cout << sv_text;
        }

        myfile.close();

    }
    else 
    {
        cout << "File tidak ditemukan" << endl;
    }

    getchar();
}
