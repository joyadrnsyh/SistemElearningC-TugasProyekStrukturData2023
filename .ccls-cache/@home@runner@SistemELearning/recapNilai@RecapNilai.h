#include <iostream>
using namespace std;

struct NilaiPertemuan {
  int nilai;
  NilaiPertemuan *next;
};

class RekapNilai {
private:
  NilaiPertemuan *head[10]; // Array of pointers to linked lists
public:
  RekapNilai() {
    for (int i = 0; i < 10; ++i) {
      head[i] = nullptr; // Initialize each pointer to nullptr
    }
  }

  // Menambah nilai ke linked list pertemuan ke-idx
  void tambahNilai(int idx, int nilai) {
    NilaiPertemuan *newNode = new NilaiPertemuan;
    newNode->nilai = nilai;
    newNode->next = nullptr;

    if (head[idx] == nullptr) {
      head[idx] = newNode;
    } else {
      NilaiPertemuan *temp = head[idx];
      while (temp->next != nullptr) {
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }

  // Menampilkan nilai dari semua pertemuan
  void tampilkanSemuaNilai() {
    cout << "Nilai dari setiap pertemuan:" << endl;
    for (int i = 0; i < 10; ++i) {
      cout << "Pertemuan ke-" << (i + 1) << ": ";
      if (head[i] == nullptr) {
        cout << "Tidak ada nilai." << endl;
      } else {
        NilaiPertemuan *temp = head[i];
        while (temp != nullptr) {
          cout << temp->nilai << " ";
          temp = temp->next;
        }
        cout << endl;
      }
    }
  }

  // Hapus semua data
  // void hapusSemuaData() {
  //     for (int i = 0; i < 10; ++i) {
  //         while (head[i] != nullptr) {
  //             NilaiPertemuan* temp = head[i];
  //             head[i] = head[i]->next;
  //             delete temp;
  //         }
  //     }
  //     cout << "Seluruh data telah dihapus." << endl;
  // }
};

int rekapnilaimhs() {
  RekapNilai rekap;

  int choice;
  bool exit = false;

  while (!exit) {
    cout << "\nMenu:\n1. Tampilkan Nilai Pertemuan\n2. Masukkan Nilai "
            "Pertemuan\n3. Keluar\nPilihan Anda: ";
    cin >> choice;

    switch (choice) {
    case 1:
      rekap.tampilkanSemuaNilai();
      break;
    case 2: {
      int pertemuan, nilai;
      cout << "Masukkan nomor pertemuan (1-10): ";
      cin >> pertemuan;

      if (pertemuan < 1 || pertemuan > 10) {
        cout << "Nomor pertemuan tidak valid!" << endl;
        break;
      }

      cout << "Masukkan nilai: ";
      cin >> nilai;

      rekap.tambahNilai(pertemuan - 1, nilai); // Indexing starts from 0
      break;
    }
    case 3:
      exit = true;
      break;
    default:
      cout << "Pilihan tidak valid!" << endl;
    }
  }

  // rekap.hapusSemuaData();

  return 0;
}
