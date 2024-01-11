#ifndef PRESENSI_FUNCTIONS_H
#define PRESENSI_FUNCTIONS_H

#include <iostream>
#include <queue>

using namespace std;

struct Mahasiswa {
  string nama;
  string nim;
};

void presensi(queue<Mahasiswa> &antrianPresensi);
void tampilkanAntrian(queue<Mahasiswa> antrianPresensi);

#endif // PRESENSI_FUNCTIONS_H
