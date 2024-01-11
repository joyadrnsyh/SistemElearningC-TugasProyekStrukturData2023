#pragma once
#include <iostream>
#include <string>
using namespace std;

struct fakultas {
  string pilFak[11] = {"Fakultas Teknologi Industri",
                       "Fakultas Agama Islam",
                       "Fakultas Hukum",
                       "Fakultas Ekonomi Bisnis",
                       "Fakultas Farmasi",
                       "Kedokteran",
                       "Fakultas Keguruan dan Ilmu Pendidikan",
                       "Fakultas Kesehatan Masyarakat",
                       "Fakultas Psikologi",
                       "Fakultas Sains Teknologi Terapan",
                       "Fakultas Sastra Budaya Dan Komunikasi"};
};

struct ProdiFTI {
  string pilProdi[5] = {"Informatika",
                        "Teknik Industri",
                        "Teknik Elektro",
                        "Teknik Kimia",
                        "Teknologi Pangan"};
};

struct prodiFAI {
  string pilProdi[5] = {"Ilmu Hadis",
                        "Bahasa Dan Sastra Arab",
                        "Perbankan Syariah",
                        "Pendidikan Agama Islam"};
};

struct prodiHukum {
  string pilProdi[1] = {"Ilmu Hukum"};
};

struct prodiFEB {
  string pilProdi[4] = {"Ekonomi Pembangunan",
                        "Manajemen", 
                        "Akuntansi",
                        "Bisnis Jasa Makanan"};
};

struct prodiFarmasi {
  string pilProdi[2] = {"Farmasi",
                        "Apoteker"};
};

struct prodiKedokteran {
  string pilProdi[2] = {"Kedokteran", 
                        "Program Profesi Dokter"};
};

struct prodiKesmas {
  string pilProdi[2] = {"Kesehatan Masyarakat",
                        "Gizi"};
};

struct prodiPsikologi {
  string pilProdi[1] = {"Psikologi"};
};

struct prodiFAST {
  string pilProdi[4] = {"Matematika",
                        "Fisika",
                        "Biologi",
                        "Sistem Informasi"};
};

struct prodiFSBK {
  string pilProdi[3] = {"Sastra Inggris",
                        "Sastra Indonesia",
                        "Ilmu Komunikasi"};
};

struct prodiFKIP {
  string pilProdi[12] = {"Bimbingan Konseling",
                         "Pendidikan Bahasa dan Sastra Indonesia",
                         "Pendidikan Bahasa dan Sastra Inggris",
                         "Pendidikan Matematika",
                         "Pendidikan Fisika",
                         "Pendidikan Biologi",
                         "Pendidikan Pancasila dan Kewarganegaraan",
                         "Pendidikan Guru Sekolah Dasar",
                         "Pendidikan Guru Paud",
                         "Pendidikan Profesi Guru",
                         "Pendidikan Vokasional Teknologi Otomotif",
                         "Pendidikan Vokasi Teknik Elektronika"};
};
