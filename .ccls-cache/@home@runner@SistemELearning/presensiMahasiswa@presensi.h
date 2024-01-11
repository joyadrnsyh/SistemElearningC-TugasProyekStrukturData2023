#include "presensi_functions.h"

using namespace std;

void presensi(queue<Mahasiswa> &antrianPresensi) {
  Mahasiswa mhs;
  cout << "Masukkan Nama Mahasiswa: ";
  cin.ignore();
  getline(cin, mhs.nama);
  cout << "Masukkan NIM Mahasiswa: ";
  cin >> mhs.nim;

  antrianPresensi.push(mhs);
  cout << "Mahasiswa " << mhs.nama << " dengan NIM " << mhs.nim
       << " berhasil dimasukkan ke dalam antrian presensi." << endl;
}

void tampilkanAntrian(queue<Mahasiswa> antrianPresensi) {
  if (antrianPresensi.empty()) {
    cout << "Antrian presensi kosong." << endl;
    return;
  }

  cout << "Antrian Presensi Mahasiswa:" << endl;
  int nomor = 1;
  while (!antrianPresensi.empty()) {
    Mahasiswa mhs = antrianPresensi.front();
    cout << nomor << ". Nama: " << mhs.nama << ", NIM: " << mhs.nim << endl;
    antrianPresensi.pop();
    nomor++;
  }
}
