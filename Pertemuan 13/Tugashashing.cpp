#include <iostream>
#include <cmath>
using namespace std;

class Data
{
public:
    int key;
    string buah;

    Data()
    {
        key = 0;
        buah = "";
    }
};

class HashTable
{
private:
    static const int MAX = 1024;

    Data storage[MAX];
    int hdt_boundary;

public:
    HashTable()
    {
        hdt_boundary = 0;
    }

    int prima_atas(int n)
    {
        if (n % 2 == 0)
            n++;
        else
            n += 2;

        while (true)
        {
            bool prima = true;

            for (int i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    prima = false;
                    break;
                }
            }

            if (prima)
                return n;

            n += 2;
        }
    }

    void setBoundary(int n)
    {
        hdt_boundary = prima_atas(n);

        cout << "Ukuran Hash Table = "
             << hdt_boundary << endl << endl;
    }

    //==========================
    // Linear Probing
    //==========================
    void tambah(int key, string buah)
    {
        bool inserted = false;
        int i = 0;

        while (!inserted && i < hdt_boundary)
        {
            int hash = ((key % hdt_boundary) + i) % hdt_boundary;

            if (storage[hash].key == 0)
            {
                storage[hash].key = key;
                storage[hash].buah = buah;
                inserted = true;
            }
            else
            {
                cout << "Collision di index "
                     << hash << endl;
                i++;
            }
        }

        if (!inserted)
        {
            cout << "Hash Table penuh!" << endl;
        }
    }

    void cetak()
    {
        cout << "\nIsi Hash Table\n\n";

        for (int i = 0; i < hdt_boundary; i++)
        {
            cout << "Index "
                 << i
                 << " -> Key : "
                 << storage[i].key
                 << " | Buah : "
                 << storage[i].buah
                 << endl;
        }
    }
};

int main()
{
    HashTable ht;

    ht.setBoundary(5);

    ht.tambah(15, "Apel");
    ht.tambah(25, "Jeruk");
    ht.tambah(35, "Mangga");
    ht.tambah(18, "Pisang");
    ht.tambah(29, "Semangka");

    ht.cetak();

    return 0;
}