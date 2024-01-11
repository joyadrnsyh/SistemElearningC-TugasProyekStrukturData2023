#pragma once
#include "./kalender/tanggalan.h"
#include "./menuUtama/function.h"
#include "./tambahMatkul/function.h"
#include "./tambahPerkuliahan/function.h"
#include "./tambahMatkul/main.h""
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
    cout << "|===========================================|" << endl;
    cout << "|                                           |" << endl;
    cout << "|      SELAMAT DATANG DI E-LEARNING UAD     |" << endl;
    cout << "|                                           |" << endl;
    cout << "|===========================================|" << endl;
    lihatMenu(4, 0);
    int menu;
    
    cout << "Pilih : ";
    cin >> menu;
    {
      if (menu == 2){
        
      }
      else if (menu == 4) {
        kalender();
      }
    }
    cout << "\033[2J\033[0;0H";
    pilFakultas(11, 0);
    int fak;
    cout << "Pilih : ";
    cin >> fak;
    if (fak == 1) {
      cout << "\033[2J\033[0;0H";
      pilProdFTI(5, 0);
      int pil1;
      cout << "Pilih Menu : ";
      cin >> pil1;
      {
        if (pil1 == 1) {
          int pil;
          perkuliahanKu();
          cout<<"Masukan Pilihan : ";
          cin>>pil;{
            if(pil==1){
              int pil;
              cout<<"Masukan Semester : ";
              cin>>pil;
              if (pil == 1){
                tifS1(5,0);
              }else if (pil == 2){
                tifS2(5,0);
              }else if (pil == 3){
                tifS3(5,0);
              }else if (pil == 4){
                tifS4(5,0);
              }
              
            }
          }
        } else if (pil1 == 2) {
          menuKu(3,0);
        } else if (pil1 == 3) {
          menuKu(3,0);
        }
      }
    } else if (fak == 2) {
      cout << "\033[2J\033[0;0H";
      pilProdFAI(3, 0);
      int pil2;
      cout << "Pilih Menu : ";
      cin >> pil2;
      {
        if (pil2 == 1) {
          menuKu(3,0);
        } else if (pil2 == 2) {
          menuKu(3,0);
        } else if (pil2 == 3) {
          menuKu(3,0);
        }
      }
    } else if (fak == 3) {
      cout << "\033[2J\033[0;0H";
      pilProdHukum(1, 0);
      int pil3;
      cout << "Pilih Menu : ";
      cin >> pil3;
      {
        if (pil3 == 1) {
          menuKu(3,0);
        }
      }

    } else if (fak == 4) {
      cout << "\033[2J\033[0;0H";
      pilProdFEB(4, 0);
      int pil4;
      cout << "Pilih Menu : ";
      cin >> pil4;
      {
        if (pil4 == 1) {
          menuKu(3,0);
        } else if (pil4 == 2) {
          menuKu(3,0);
        } else if (pil4 == 3) {
          menuKu(3,0);
        } else if (pil4 == 4) {
          menuKu(3,0);
        }
      }
    } else if (fak == 5) {
      cout << "\033[2J\033[0;0H";
      pilProdFarmasi(2, 0);
      int pil5;
      cout << "Pilih Menu : ";
      cin >> pil5;
      {
        if (pil5 == 1) {
          menuKu(3,0);
        } else if (pil5 == 2) {
          menuKu(3,0);
        }
      }
    } else if (fak == 6) {
      cout << "\033[2J\033[0;0H";
      pilProdKedokteran(2, 0);
      int pil6;
      cout << "Pilih Menu : ";
      cin >> pil6;
      {
        if (pil6 == 1) {
          menuKu(3,0);
        } else if (pil6 == 2) {
          menuKu(3,0);
        }
      }
    } else if (fak == 7) {
      cout << "\033[2J\033[0;0H";
      pilProdFKIP(12, 0);
      int pil7;
      cout << "Pilih Menu : ";
      cin >> pil7;
      {
        if (pil7 == 1) {
          menuKu(3,0);
        } else if (pil7 == 2) {
          menuKu(3,0);
        } else if (pil7 == 3) {
          menuKu(3,0);
        } else if (pil7 == 4) {
          menuKu(3,0);
        } else if (pil7 == 5) {
          menuKu(3,0);;
        } else if (pil7 == 6) {
          menuKu(3,0);
        } else if (pil7 == 7) {
          menuKu(3,0);
        } else if (pil7 == 8) {
          menuKu(3,0);
        } else if (pil7 == 9) {
          menuKu(3,0);
        } else if (pil7 == 10) {
          menuKu(3,0);
        } else if (pil7 == 11) {
          menuKu(3,0);
        } else if (pil7 == 12) {
          menuKu(3,0);
        } else if (pil7 == 13) {
          menuKu(3,0);
        } else if (pil7 == 14) {
          menuKu(3,0);
        }
      }
    } else if (fak == 8) {
      cout << "\033[2J\033[0;0H";
      pilProdKesmas(2, 0);
      int pil8;
      cout << "Pilih Menu : ";
      cin >> pil8;
      {
        if (pil8 == 1) {
          menuKu(3,0);
        } else if (pil8 == 2) {
          menuKu(3,0);
        }
      }
    } else if (fak == 9) {
      cout << "\033[2J\033[0;0H";
      pilProdPsikologi(1, 0);
      int pil9;
      cout << "Pilih Menu : ";
      cin >> pil9;
      {
        if (pil9 == 1) {
          menuKu(3,0);
        }
      }
    } else if (fak == 10) {
      cout << "\033[2J\033[0;0H";
      pilProdFAST(3, 0);
      int pil10;
      cout << "Pilih Menu : ";
      cin >> pil10;
      {
        if (pil10 == 1) {
          menuKu(3,0);
        } else if (pil10 == 2) {
          menuKu(3,0);
        } else if (pil10 == 3) {
          menuKu(3,0);
        }
      }
    } else if (fak == 11)
      cout << "\033[2J\033[0;0H";
    pilProdFSBK(4, 0);
    int pil11;
    cout << "Pilih Menu : ";
    cin >> pil11;
    {
      if (pil11 == 1) {
        menuKu(3,0);
      } else if (pil11 == 2) {
        menuKu(3,0);
      } else if (pil11 == 3) {
        menuKu(3,0);
      } else if (pil11 == 4) {
        menuKu(3,0);
      }
    }
  }

  void setUser() { setAuth(); }
};