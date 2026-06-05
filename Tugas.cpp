#include <iostream>
using namespace std;

const int MAX = 100;

class Queue {
private:
    int front;
    int rear;
    int count;
    int arr[MAX];

public:
    Queue() {
        front = 0;
        rear = MAX - 1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == MAX;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Antrean penuh!" << endl;
            return;
        }

        rear = (rear + 1) % MAX;
        arr[rear] = x;
        count++;

        cout << "Nomor antrean " << x
            << " berhasil ditambahkan." << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Tidak ada antrean." << endl;
            return -1;
        }

        int data = arr[front];
        front = (front + 1) % MAX;
        count--;

        return data;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Tidak ada antrean." << endl;
            return -1;
        }

        return arr[front];
    }

    int size() {
        return count;
    }

    void display() {
        if (isEmpty()) {
            cout << "Antrean kosong." << endl;
            return;
        }

        cout << "\n=== DAFTAR ANTREAN ===" << endl;

        for (int i = 0; i < count; i++) {
            int index = (front + i) % MAX;
            cout << "Antrean " << (i + 1)
                 << " : Nomor " << arr[index] << endl;
        }

        cout << endl;
    }
};

int main() {
    Queue queue;

    int pilihan;
    int nomorAntrean = 1;

    do {
        cout << "\n====================================" << endl;
        cout << " SISTEM ANTREAN LAYANAN PUBLIK" << endl;
        cout << "====================================" << endl;
        cout << "1. Ambil Nomor Antrean (Enqueue)" << endl;
        cout << "2. Panggil Antrean (Dequeue)" << endl;
        cout << "3. Lihat Antrean Terdepan (Peek)" << endl;
        cout << "4. Tampilkan Semua Antrean" << endl;
        cout << "5. Jumlah Antrean (Size)" << endl;
        cout << "6. Cek Antrean Kosong (isEmpty)" << endl;
        cout << "7. Cek Antrean Penuh (isFull)" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan : ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            queue.enqueue(nomorAntrean);

            cout << "Nomor antrean Anda adalah: "
                 << nomorAntrean << endl;

            nomorAntrean++;
            break;

        case 2: {
            int dipanggil = queue.dequeue();

            if (dipanggil != -1) {
                cout << "Nomor antrean yang dipanggil: "
                     << dipanggil << endl;
            }
            break;
        }

        case 3:
            if (!queue.isEmpty()) {
                cout << "Antrean berikutnya: "
                     << queue.peek() << endl;
            }
            break;

        case 4:
            queue.display();
            break;

        case 5:
            cout << "Jumlah antrean saat ini: "
                << queue.size() << endl;
            break;

        case 6:
            if (queue.isEmpty())
                cout << "Antrean kosong." << endl;
            else
                cout << "Antrean tidak kosong." << endl;
            break;

        case 7:
            if (queue.isFull())
                cout << "Antrean penuh." << endl;
            else
                cout << "Antrean belum penuh." << endl;
            break;

        case 0:
            cout << "Program selesai." << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 0);

    return 0;
}