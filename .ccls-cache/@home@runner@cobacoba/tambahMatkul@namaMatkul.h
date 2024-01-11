#include <iostream>
#include <string>

using namespace std;

int matkul() {
    int jumlahMatakuliah;
    cout << "Masukkan jumlah matakuliah: ";
    cin >> jumlahMatakuliah;

    // Membuat array dinamis untuk menyimpan matakuliah
    string* matakuliah = new string[jumlahMatakuliah];

    // Memasukkan matakuliah ke dalam array
    for (int i = 0; i < jumlahMatakuliah; i++) {
        cout << "Masukkan nama matakuliah ke-" << i + 1 << ": ";
        cin.ignore(); // Untuk menghindari masalah dengan '\n' tersisa di buffer
        getline(cin, matakuliah[i]);
    }

    // Menampilkan daftar matakuliah
    cout << "Daftar Matakuliah:" << endl;
    for (int i = 0; i < jumlahMatakuliah; i++) {
        cout << i + 1 << ". " << matakuliah[i] << endl;
    }

    // Jangan lupa untuk menghapus memori yang dialokasikan
    delete[] matakuliah;

    return 0;
