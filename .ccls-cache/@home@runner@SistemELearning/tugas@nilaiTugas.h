#include <iostream>
using namespace std;
#include "../menuUtama107/function.h"
struct Tugas {
    int nilai;
    Tugas* next;
};

void tambahTugas(Tugas*& head, int nilai) {
    Tugas* newTugas = new Tugas;
    newTugas->nilai = nilai;
    newTugas->next = nullptr;

    if (head == nullptr) {
        head = newTugas;
    } else {
        Tugas* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newTugas;
    }
}

void tampilNilaiTugas(Tugas* head) {
    if (head == nullptr) {
        cout << "Belum ada nilai tugas yang dimasukkan." << endl;
    } else {
        cout << "Nilai Tugas: ";
        Tugas* current = head;
        while (current != nullptr) {
            cout << current->nilai << " ";
            current = current->next;
        }
        cout << endl;
    }
}

int main() {
    Tugas* head = nullptr;
    int pilihan, nilai;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Tambah Nilai Tugas\n";
        cout << "2. Lihat Nilai Tugas\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu (1/2/3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nilai tugas: ";
                cin >> nilai;
                tambahTugas(head, nilai);
                cout << "Nilai tugas berhasil ditambahkan." << endl;
                break;
            case 2:
                tampilNilaiTugas(head);
                break;
            case 3:
                // // Dealokasi memori sebelum keluar
                // while (head != nullptr) {
                //     Tugas* temp = head;
                //     head = head->next;
                //     delete temp;
                // }
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan pilih menu yang sesuai." << endl;
        }
    }

    return 0;
}
