#include <iostream>
#include <queue>
#include "presensi_functions.h"

using namespace std;

int mainPresensi() {
  queue<Mahasiswa> antrianPresensi;
  int pilihan;

  do {
    cout << "\nMenu Presensi Mahasiswa:" << endl;
    cout << "1. Presensi" << endl;
    cout << "2. Tampilkan Antrian Presensi" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
      presensi(antrianPresensi);
      break;
    case 2:
      tampilkanAntrian(antrianPresensi);
      break;
    case 3:
      cout << "Program selesai." << endl;
      break;
    default:
      cout << "Pilihan tidak valid." << endl;
      break;
    }
  } while (pilihan != 3);

  return 0;
}
