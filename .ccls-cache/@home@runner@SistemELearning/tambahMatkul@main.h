#include "../tambahMatkul/function.h"
#include "../tambahMatkul/struct.h"
#include "../tambahPerkuliahan/structTP.h"
#include "../pohon/main.h"
#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menampilkan pilihan fakultas
void tampilFakultas(const matkulinformatika &fakultasData,
                    const string pilihanFakultas[], int jumlahPilihan) {
  cout << "MataKuliah yang Anda pilih:" << endl;
  for (int i = 0; i < jumlahPilihan; i++) {
    cout << i + 1 << ". " << pilihanFakultas[i] << endl;
  }
}

// FTI
int perkuliahanInformatika() {
  matkulinformatika fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari MataKuliah" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. TambahTugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 7) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list7[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list7[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } 
    else if (menu == 2) {
      // Menampilkan pilihan fakultas yang telah dipilih
      tampilFakultas(fakultasData, pilihanFakultas, jumlahPilihan);
    } 
    else if (menu == 3) {
      tambahTugas();
      break;
    }
    else {
      cout << "Pilihan tidak valid." << endl;
    }
  }

  return 0;
}

int perkuliahanIndustri() {
  matkulIndustri fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas "<<endl;
    cout << "4. Keluar" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 7) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list7[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list7[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }

  return 0;
}

int perkuliahanElektro() {
  matkulElektro fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 7) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list7[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list7[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }

  return 0;
}

int perkuliahanKimia() {
  matkulKimia fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 7) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list7[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list7[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }

  return 0;
}

int perkuliahanTP() {
  matkulTeknologiPangan fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 7) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list7[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list7[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

// FAI
int perkuliahanIH() {
  matkulIlmuHadis fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 7) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list7[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list7[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int perkuliahanBSA() {
  matkulBSA fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 7) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list7[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list7[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int perkuliahanPBS() {
  matkulPBS fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 7) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list7[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list7[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int perkuliahanPAI() {
  matkulPAI fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

//hukum
int perkuliahanHukum() {
  matkulHUkum fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int EkonomiPembangunan() {
  matkulEkonomiPembangunan fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int Manajemen() {
  matkulManajemen fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int Akuntansi() {
  matkulAkuntansi fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int BJM() {
  matkulBJM fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int Farmasi() {
  matkulFarmasi fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int Apoteker() {
  matkulApoteker fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      }
      else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } 
      else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int Kedokteran() {
  matkulKedokteran fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int Kesmas() {
  matkulKesmas fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int psikologi() {
  matkulpsikologi fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int Matematika() {
  matkulMatematika fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int Fisika() {
  matkulFisika fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int Biologi() {
  matkulBiologi fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } 
      else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } 
      else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } 
      else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } 
      else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } 
      else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int SistemInformasi() {
  matkulSistemInformasi fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int SastraInggris () {
  matkulSastraInggris fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int SastraIndonesia () {
  matkulSastraIndonesia fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};

int Ilkom  () {
  matkulIlkom fakultasData;
  string pilihanFakultas[11]; // Array untuk menyimpan pilihan fakultas
  int jumlahPilihan = 0;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Cari Perkuliahan" << endl;
    cout << "2. Tampilkan Perkuliahan" << endl;
    cout << "3. Tambah Tugas" << endl;
    cout << "Pilihan Anda: ";
    int menu;
    cin >> menu;

    if (menu == 1) {
      int pilSmt;
      cout << "Masukan Semester : ";
      cin >> pilSmt;

      // Menampilkan daftar mata kuliah sesuai dengan pilihan semester
      if (pilSmt == 1) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list1[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list1[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 2) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list2[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list2[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 3) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list3[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list3[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 4) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list4[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list4[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 5) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list5[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list5[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else if (pilSmt == 6) {
        cout << "Daftar Mata Kulliah:" << endl;
        for (int i = 0; i < 5; i++) {
          cout << i + 1 << ". " << fakultasData.list6[i] << endl;
        }

        int pilihan;
        cout << "Pilih nomor mata kuliah yang Anda inginkan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
          pilihanFakultas[jumlahPilihan] = fakultasData.list6[pilihan - 1];
          jumlahPilihan++;
          cout << "Mata kuliah berhasil dipilih." << endl;
        } else {
          cout << "Nomor mata kuliah tidak valid." << endl;
        }
      } else {
        cout << "Semester tidak valid." << endl;
      }
    } else if (menu == 2) {
      cout << "Fakultas yang Anda pilih:" << endl;
      for (int i = 0; i < jumlahPilihan; i++) {
        cout << i + 1 << ". " << pilihanFakultas[i] << endl;
      }
    } else if (menu == 3) {
      tambahTugas();
      break;
    } else {
      cout << "Pilihan tidak valid." << endl;
    }
  }
  return 0;
};