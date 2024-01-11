#include <iostream>
#include <string>

using namespace std; // Menggunakan namespace std

struct Perkuliahan {
    string namaMataKuliah;
    int sks;
};

int main() {
    Perkuliahan* perkuliahanArray = nullptr;
    int jumlahPerkuliahan = 0;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Tambah Perkuliahan\n";
        cout << "2. Lihat Perkuliahan\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu (1/2/3): ";

        int pilihan;
        cin >> pilihan;

        if (pilihan == 1) {
            string namaMataKuliah;
            int sks;

            cout << "Masukkan nama mata kuliah: ";
            cin >> namaMataKuliah;
            cout << "Masukkan jumlah SKS: ";
            cin >> sks;

            // Menambahkan data perkuliahan ke array dinamis
            Perkuliahan* newPerkuliahanArray = new Perkuliahan[jumlahPerkuliahan + 1];
            for (int i = 0; i < jumlahPerkuliahan; i++) {
                newPerkuliahanArray[i] = perkuliahanArray[i];
            }
            newPerkuliahanArray[jumlahPerkuliahan].namaMataKuliah = namaMataKuliah;
            newPerkuliahanArray[jumlahPerkuliahan].sks = sks;
            delete[] perkuliahanArray;
            perkuliahanArray = newPerkuliahanArray;
            jumlahPerkuliahan++;

            cout << "Perkuliahan berhasil ditambahkan.\n";
        } else if (pilihan == 2) {
            cout << "Daftar Perkuliahan:\n";
            for (int i = 0; i < jumlahPerkuliahan; i++) {
                cout << "Mata Kuliah: " << perkuliahanArray[i].namaMataKuliah << ", SKS: " << perkuliahanArray[i].sks << endl;
            }
        } else if (pilihan == 3) {
            // Keluar dari program
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan pilih menu yang sesuai.\n";
        }
    }

    // Dealokasi array dinamis sebelum keluar
    delete[] perkuliahanArray;

    return 0;
}
