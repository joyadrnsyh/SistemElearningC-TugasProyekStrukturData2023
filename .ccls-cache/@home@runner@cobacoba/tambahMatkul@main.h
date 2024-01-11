#pragma once
#include <iostream>
#include <string>
#include "../tambahMatkul/struct.h"
#include "../tambahMatkul/function.h"
#include "../tambahPerkuliahan/structTP.h"
using namespace std;

// struct Fakultas {
//     string pilFak[11] = {
//         "Fakultas Teknologi Industri",
//         "Fakultas Agama Islam",
//         "Fakultas Hukum",
//         "Fakultas Ekonomi Bisnis",
//         "Fakultas Farmasi",
//         "Kedokteran",
//         "Fakultas Keguruan dan Ilmu Pendidikan",
//         "Fakultas Kesehatan Masyarakat",
//         "Fakultas Psikologi",
//         "Fakultas Sains Teknologi Terapan",
//         "Fakultas Sastra Budaya Dan Komunikasi"
//     };
// };

// Fungsi untuk menampilkan pilihan fakultas
void tampilFakultas(const matkulinformatika& fakultasData, const string pilihanFakultas[], int jumlahPilihan) {
    cout << "Fakultas yang Anda pilih:" << endl;
    for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
    }
}

int perkuliahanKu() {
    matkulinformatika fakultasData;
    string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
    int jumlahPilihan = 0;
    // char lanjut;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Cari Perkuliahan" << endl;
        cout << "2. Tampilkan Perkuliahan" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan Anda: ";
        int menu;
        cin >> menu;

        if (menu == 1) {
            int pilSmt;
            cout<<"Masukan Semester : ";
            cin>>pilSmt;
            if(pilSmt == 1){
              cout << "Daftar Mata Kulliah:" << endl;
              for (int i = 0; i < 11; i++) {
                  cout << i + 1 << ". " << fakultasData.list1[i] << endl;
            }
            // cout << "Daftar Fakultas:" << endl;
            // for (int i = 0; i < 11; i++) {
            //     cout << i + 1 << ". " << fakultasData.pilFak[i] << endl;
            // }

            int pilihan;
            cout << "Pilih nomor fakultas yang Anda inginkan: ";
            cin >> pilihan;

            if (pilihan >= 1 && pilihan <= 11) {
                pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
                jumlahPilihan++;
                cout << "Fakultas berhasil dipilih." << endl;
            } else {
                cout << "Nomor fakultas tidak valid." << endl;
            }
        } else if (menu == 2) {
            // Menampilkan pilihan fakultas yang telah dipilih
            tampilFakultas(fakultasData, pilihanFakultas, jumlahPilihan);
        } else if (menu == 3) {
            // Keluar dari program
            break;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }
    }

    
}
  return 0;
}
