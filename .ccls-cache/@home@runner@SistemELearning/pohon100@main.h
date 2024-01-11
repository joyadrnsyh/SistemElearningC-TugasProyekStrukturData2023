#include "../tugas107/function.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Definisikan struktur node
struct Node {
  string materi;
  vector<Node *> anak;

  // Konstruktor untuk node
  Node(const string &materi) : materi(materi) {}

  // Destruktor untuk node
  ~Node() {
    for (Node *anakNode : anak) {
      delete anakNode;
    }
  }
};

// Fungsi untuk menambahkan node anak
Node *tambahAnak(Node *parent, const string &materi) {
  Node *node = new Node(materi);
  parent->anak.push_back(node);
  return node;
}

// Fungsi untuk mencetak pohon secara rekursif
void cetakPohon(Node *root, string spasi = "") {
  if (root == nullptr)
    return;

  cout << spasi << root->materi << endl;
  spasi += "  ";

  for (Node *anak : root->anak) {
    cetakPohon(anak, spasi);
  }
}

// Fungsi untuk memilih pertemuan
Node *pilihPertemuan(Node *root) {
  int pilihan;
  cout << "Pilih Pertemuan:" << endl;
  for (int i = 0; i < root->anak.size(); ++i) {
    cout << i + 1 << ". " << root->anak[i]->materi << endl;
  }
  cout << "Masukkan nomor pertemuan: ";
  cin >> pilihan;

  if (pilihan >= 1 && pilihan <= root->anak.size()) {

    return root->anak[pilihan - 1];
    ;
  } else {
    cout << "Nomor pertemuan tidak valid." << endl;
    return nullptr;
  }
}

// Fungsi untuk memilih materi dalam pertemuan
Node *pilihMateri(Node *pertemuan) {
  cout << "Pilih Materi dalam " << pertemuan->materi << ":" << endl;
  for (int i = 0; i < pertemuan->anak.size(); ++i) {
    cout << i + 1 << ". " << pertemuan->anak[i]->materi << endl;
  }
  ftrtambahTugas();
    return nullptr;
}

int tambahTugas() {
  // Buat node root
  Node *root = new Node("Perkuliahan");

  // Tambahkan materi dan node anak
  Node *pertemuan1 = tambahAnak(root, "Pertemuan 1");
  // tambahAnak(pertemuan1, "Kontrak Perkuliahan");
  tambahAnak(
      pertemuan1,
      "Kontrak "    "Perkuliahan\n==========================================================="
      "====\nSemester: Ganjil 2023/2024\nMata Kuliah: Pengantar Ilmu "
      "Komputer\nDosen Pengampu: [Nama Dosen]\n1. Tujuan "
      "Pembelajaran\nMemahami dasar-dasar ilmu komputer dan ruang "
      "lingkupnya.\nMengembangkan pemahaman tentang konsep algoritma dan "
      "langkah-langkah penyelesaian masalah.\nMenguasai dasar-dasar "
      "pemrograman dan bahasa pemrograman\nMemahami konsep dasar sistem "
      "operasi dan peranannya.\nMengenali prinsip dasar jaringan komputer dan "
      "internet.\n2. Metode Pembelajaran\nCeramah interaktif.\nDiskusi "
      "kelompok.\nStudi kasus.\nTugas individu.\nUjian tengah semester dan "
      "akhir semester.\n3. Evaluasi\nPartisipasi kelas: 10%\nTugas individu: "
      "30%\nUjian tengah semester: 30%\nUjian akhir semester: 30%\nKeaktifan "
      "dan kerjasama: 10%\n4. Pertemuan dan Jadwal\nPertemuan 1-2: Pengantar "
      "Ilmu Komputer (Tanggal: [Tanggal Pertemuan 1])\nPertemuan 3-4: Konsep "
      "Algoritma (Tanggal: [Tanggal Pertemuan 3])\nPertemuan 5-6: Pemrograman "
      "Dasar (Tanggal: [Tanggal Pertemuan 5])\nPertemuan 7-8: Sistem Operasi "
      "(Tanggal: [Tanggal Pertemuan 7])\nPertemuan 9-10: Jaringan Komputer "
      "(Tanggal: [Tanggal Pertemuan 9])\nPertemuan 11-12: Internet (Tanggal: "
      "[Tanggal Pertemuan 11])\nPertemuan 13-14: Konsolidasi dan Evaluasi "
      "(Tanggal: [Tanggal Pertemuan 13])\n5. Kehadiran dan "
      "Keterlambatan\nMahasiswa diharapkan hadir tepat waktu.\nKeterlambatan "
      "akan mempengaruhi penilaian kehadiran.\n6. Catatan Tambahan\nJadwal "
      "perkuliahan dapat berubah dan akan diinformasikan lebih "
      "lanjut\nMahasiswa diharapkan untuk membaca materi sebelum "
      "pertemuan.\nBimbingan dan konsultasi tersedia di luar jam "
      "perkuliahan.\nDengan menandatangani kontrak ini, mahasiswa setuju untuk "
      "mematuhi aturan dan ketentuan yang telah ditetapkan dalam kontrak "
      "perkuliahan "
      "ini.\n==============================================================="
      "\n");

  Node *pertemuan2 = tambahAnak(root, "Pertemuan 2");
  tambahAnak(pertemuan2, "Pengertian Materi A");

  Node *pertemuan3 = tambahAnak(root, "Pertemuan 3");
  tambahAnak(pertemuan3, "Pengertian Materi B");

  Node *pertemuan4 = tambahAnak(root, "Pertemuan 4");
  tambahAnak(pertemuan4, "UJI KOMPETENSI 1");

  Node *pertemuan5 = tambahAnak(root, "Pertemuan 5");
  tambahAnak(pertemuan5, "Pengertian Materi C");

  Node *pertemuan6 = tambahAnak(root, "Pertemuan 6");
  tambahAnak(pertemuan6, "Pengertian Materi C");

  Node *pertemuan7 = tambahAnak(root, "Pertemuan 7");
  tambahAnak(pertemuan7, "UJI KOMPTENSI 2");

  Node *pertemuan8 = tambahAnak(root, "Pertemuan 8");
  tambahAnak(pertemuan8, "PENGERTIAN MATERI D");

  Node *pertemuan9 = tambahAnak(root, "Pertemuan 9");
  tambahAnak(pertemuan9, "PENGERTIAN MATERI E");

  Node *pertemuan10 = tambahAnak(root, "Pertemuan ");
  tambahAnak(pertemuan10, "PENGERTIAN MATERI D");

  Node *pertemuan11 = tambahAnak(root, "Pertemuan 11");
  tambahAnak(pertemuan11, "PENGERTIAN MATERI E");

  Node *pertemuan12 = tambahAnak(root, "Pertemuan 12");
  tambahAnak(pertemuan12, "PENGERTIAN MATERI D");

  Node *pertemuan13 = tambahAnak(root, "Pertemuan 13");
  tambahAnak(pertemuan13, "PENGERTIAN MATERI E");

  Node *pertemuan14 = tambahAnak(root, "Pertemuan 14");
  tambahAnak(pertemuan14, "PENGERTIAN MATERI E");

  // Pilih pertemuan
  Node *pertemuanTerpilih = pilihPertemuan(root);

  if (pertemuanTerpilih != nullptr) {
    // Pilih materi dalam pertemuan yang dipilih
    Node *materiTerpilih = pilihMateri(pertemuanTerpilih);

    if (materiTerpilih != nullptr) {
      // Cetak materi yang dipilih
      cetakPohon(materiTerpilih);
    }
  }

  // Hapus pohon secara rekursif
  delete root;
  return 0;
}