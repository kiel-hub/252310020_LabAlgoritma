#include <iostream>
using namespace std;

int main() {
    int bil, pembagi = 0;
    cout << "Masukkan bilangan : ";
    cin >> bil;

    if (bil > 1) {
        for (int i = 2; i < bil; i++) {
            if (bil % i == 0) {
                pembagi++; 
            }
        }
    }

    if (bil <= 1 || pembagi > 0)
        cout << bil << " Bukan termasuk bilangan prima" << endl;
    else
        cout << bil << " termasuk bilangan PRIMA" << endl;
}
