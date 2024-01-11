#pragma once
#include "./kalender103/tanggalan.h"
#include "./menuUtama107/function.h"
#include "./tambahMatkul107/function.h"
#include "./tambahMatkul107/main.h"
#include "./tambahPerkuliahan103/function.h"
#include <iostream>
#include <string>
using namespace std;

struct user {
  int id_user;
  string nama;
  string nim;
  string prodi;
  int semester;
  string password;
};

class ElearningUAD {
public:
  ElearningUAD() {}

  void setAuth() { setDisplay(0); }

  void setDisplay(int a) {
    cout << "\033[2J\033[0;0H";
    cout << "======================================"<<endl;
    cout << endl;
    cout << "░█▀▀░░░█░░░█▀▀░█▀█░█▀█░█▀█░▀█▀░█▀█░█▀▀░" << endl;
    cout << "░█▀▀░░░█░░░█▀▀░█▀█░█▀▄░█░█░░█░░█░█░█░█░" << endl;
    cout << "░▀▀▀░░░▀▀▀░▀▀▀░▀░▀░▀░▀░▀░▀░▀▀▀░▀░▀░▀▀▀░" << endl;
    cout << "      𝕌ℕ𝕀𝕍𝔼ℝ𝕊𝕀𝕋𝔸𝕊 𝔸ℍ𝕄𝔸𝔻 𝔻𝔸ℍ𝕃𝔸ℕ      " << endl;
    cout << " ======================================"<<endl;
    cout << "\n \n \n";
    cout << "|===========================================|"<<endl;
    lihatMenu(4, 0);
    int menu;
    cout << "Pilih : ";
    cin >> menu;

    cout << "\n \n \n";
      cout << " ____           _          _ _       _                   ____                    " << endl;
      cout << "|  _ \\ ___ _ __| | ___   _| (_) __ _| |__   __ _ _ __   / ___|  __ _ _   _  __ _ " << endl;
      cout << "| |_) / _ \\ '__| |/ / | | | | |/ _` | '_ \\ / _` | '_ \\  \\___ \\ / _` | | | |/ _` |" << endl;
      cout << "|  __/  __/ |  |   <| |_| | | | (_| | | | | (_| | | | |  ___) | (_| | |_| | (_| |" << endl;
      cout << "|_|   \\___|_|  |_|\\_\\__,__|_|_|\\__,_|_| |_|\\__,_|_| |_| |____/ \\__,_|\\__, |\\__,_|" << endl;
      cout << "                                                                     |___/        " << endl;
    cout << "\n \n \n";
    // Pekuliahan Saya
    if (menu == 1) {
      int pil1;
      menuKu(3, 0);
      cout << "pilih menu : ";
      cin >> pil1;
      // Cari Perkuliahan
      if (pil1 == 1) {
        pilFakultas(10, 0);
        int pilfak;
        cout << "Pilih Fakultas : ";
        cin >> pilfak;
        // Cari Prodi
        // ini FTI
        if (pilfak == 1) {
          pilProdFTI(5, 0);
          int fti;
          cout << "Pilih Prodi : ";
          cin >> fti;
          if (fti == 1) {
            // Nampilih Menu
            perkuliahanInformatika();
          }
          if (fti == 2) {
            // Nampilih Menu
            perkuliahanIndustri();
          }
          if (fti == 3) {
            // Nampilih Menu
            perkuliahanElektro();
          }
          if (fti == 4) {
            // Nampilih Menu
            perkuliahanKimia();
          }
          if (fti == 5) {
            // Nampilih Menu
            perkuliahanTP();
          }
        }
        // ini FAI
        if (pilfak == 2) {
          pilProdFAI(4, 0);
          int pilFAI;
          cout << "Masukan Pilihan : ";
          cin >> pilFAI;
          if (pilFAI == 1) {
            perkuliahanIH();
          } else if (pilFAI == 2) {
            perkuliahanBSA();
          } else if (pilFAI == 3) {
            perkuliahanPBS();
          } else if (pilFAI == 4) {
            perkuliahanPAI();
          } else {
            cout << "Pilihan salah " << endl;
          }
        }
        // ini hukum
        if (pilfak == 3) {
          pilProdHukum(1, 0);
          int pilHkm;
          cout << "Pilih Prodi : ";
          cin >> pilHkm;
          if (pilHkm == 1) {
            perkuliahanHukum();
          }
        }
        // ini Ekonomi
        if (pilfak == 4) {
            pilProdFEB(4, 0);
          int pilHkm;
          cout << "Pilih Prodi : ";
          cin >> pilHkm;
          if (pilHkm == 1) {
            EkonomiPembangunan();
          }
          if (pilHkm == 2) {
              Manajemen();
          }
          if (pilHkm == 3) {
              Akuntansi();
          }
          if (pilHkm == 4) {
              BJM();
          }
        }
        // ini farmasi
        if (pilfak == 5) {
              pilProdFarmasi(2, 0);
          int pilHkm;
          cout << "Pilih Prodi : ";
          cin >> pilHkm;
          if (pilHkm == 1) {
              Farmasi();
          }
          if (pilHkm == 2) {
              Apoteker();
          }
        }

        if (pilfak == 6) {
          pilProdKedokteran(2, 0);
          int pilHkm;
          cout << "Pilih Prodi : ";
          cin >> pilHkm;
          if (pilHkm == 1) {
            Kedokteran();
          }
          if (pilHkm == 2) {
            Kesmas();
          }
        }

        if (pilfak == 7) {
            pilProdKesmas(2, 0);
          int pilHkm;
          cout << "Pilih Prodi : ";
          cin >> pilHkm;
          if (pilHkm == 1) {
            Kesmas();
          }
        }

        if (pilfak == 8) {
              pilProdPsikologi(1, 0);
          int pilHkm;
          cout << "Pilih Prodi : ";
          cin >> pilHkm;
          if (pilHkm == 1) {
            psikologi();
          }
        }

        if (pilfak == 9) {
                pilProdFAST(4, 0);
          int pilHkm;
          cout << "Pilih Prodi : ";
          cin >> pilHkm;
          if (pilHkm == 1) {
            Matematika();
          }
          if (pilHkm == 2) {
            Fisika();
          }
          if (pilHkm == 3) {
            Biologi();
          }
          if (pilHkm == 4) {
            SistemInformasi();
          }
        }

        if (pilfak == 10) {
                   pilProdFSBK(3, 0);
          int pilHkm;
          cout << "Pilih Prodi : ";
          cin >> pilHkm;
          if (pilHkm == 1) {
            SastraInggris ();
          }
          if (pilHkm == 2) {
            SastraIndonesia ();
          }
          if (pilHkm == 3) {
            Ilkom  ();
          }
        }
      }
    }
    if (menu == 2) {
      lihatMenu(4, 0);
    }
    if (menu == 3) {
      pilFakultas(11, 0);
      int pilfak;
      cout << "Pilih Fakultas : ";
      cin >> pilfak;
    }
    if (menu == 4) {
      kalender();
    }
  }

  void setUser() { setAuth(); }
};