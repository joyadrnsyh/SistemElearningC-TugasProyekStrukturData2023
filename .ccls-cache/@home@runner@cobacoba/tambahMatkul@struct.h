#pragma once
#include <iostream>
#include <string>

using namespace std; // Menggunakan namespace std

struct setMenuKuliah{
string setMenu[3] = {
  "Cari Perkuliahan",
  "Perkuliahan Saya",
  "Keluar"
};
};

struct Perkuliahan {
  string namaMataKuliah;
  int sks;
};
struct matkulinformatika {
    string list1[5] = {
      "Logika Informatika",
      "Dasar Sistem Komputer",
      "Pancasila",
      "Majanemen Data dan Informasi",
      "Kalkulus Informatika"
    };
    string list2[5] = {
      "Algoritma Pemrograman",
      "Aljabar Linear",
      "Arsitektur Komputer",
      "Pemrograman Web",
      "Matematika Diskrit"
    };
    string list3[5] = {
      "Basis Data",
      "Pemrograman Berorientasi Objek",
      "Sistem Operasi",
      "Statistika Informatika",
      "Struktur Data"
    };
    string list4[5] = {
      "Grafika Komputer",
      "Interaksi Manusia dan Komputer",
      "Kecerdasan Buatan",
      "Komunikasi Data dan Jaringan Komputer",
      "Strategi Algoritma"
    };
    string list5[5] = {
      "Keamanan Komputer",
      "Pemrograman Mobile",
      "Pengantar Manajemen Dan Prinsip Proyek",
      "Teori Bahasa Otomata",
      "Mata Kuliah Pilihan"
    };
    string list6[4] = {
      "Manajemen Proyek Teknologi Informasi",
      "Metodologi Penelitian",
      "Rekayasa Perangkat Lunak",
      "Teknologi Multimedia"
    };
    string list7[5] = {
      "Kapita Selekta",
      "Kewirausahaan",
      "Komunikasi Interpersonal",
      "Sosio Informatika",
      "Praktek Magang"
    };
};
// struct matkulIndustri {
//     string list1[5] = {
//       "Fisika Dasar",
//       "Biologi",
//       "Kalkulus Univariat",
//       "Pengantar Ilmu Ekonomika",
//       "Pengantar Teknik Industri"
//     };
//     string list2[5] = {
//       "Aljabar Linear",
//       "Ilmu Bahan",
//       "Kalkulus Multivariat",
//       "Kapita Selekta",
//       "Kelistrikan"
//     };
//     string list3[5] = {
//       "Gambar Teknik",
//       "Kesehatan dan Keselamatan Kerja",
//       "Matematika Optimisasi",
//       "Mekanika Fisika",
//       "Teori Probabilitas"
//     };
//     string list4[5] = {
//       "Ergonomika dan Perancangan Sistem Kerja",
//       "Ketanakerjaan",
//       "Perancangan dan Pengembangan Produk",
//       "Perencanaan dan Pengelolaan Produksi"
//       "Riset Operasi Stokastik"
//     };
//     string list5[5] = {
//       "Analisis Biaya",
//       "Metode Pengukuran Kerja",
//       "Pemodelan Sistem",
//       "Proses Manufaktur",
//       "Sistem Lingkungan Industri"
//     };
//     string list6[5] = {
//       "Analita Data",
//       "Ekonomi Teknik",
//       "Metodologi Penelitian",
//       "Organisasi dan Manajemen Perusahaan Industri",
//       "Simulasi Komputer"
//     };
//     string list7[5] = {
//       "Analisis dan Perancangan Sistem Informasi",
//       "Kerja Praktik",
//       "Metodologi Penelitian Lanjut", 
//       "Perancangan Bisnis Perusahaan",
//       "Tata letak Fasilitas"
//     };
// };
// struct matkulElektro {
//     string list1[5] = {
//       "Dasar Komputer dan Pemrograman",
//       "Dasar Teknik Elktro",
//       "Fisika Elektro",
//       "Konversi Energi",
//       "Matematika Teknik"
//     };
//     string list2[5] = {
//       "Dasar Elektronika",
//       "Pemrograman Lanjut",
//       "Probabilitas dan Statistik",
//       "Rangkaian Listri", 
//       "Pengukuran Besaran Listrik"
//     };
//     string list3[5] = {
//       "Dasar Sistem Telekomunikasi",
//       "Metode Numerik",
//       "Sistem dan Sinyal",
//       "Teknik Digital",
//       "Medan Elektromagnetika"
//     };
//     string list4[5] = {
//       "Dasar Sistem Kendali",
//       "Elektronika Analog",
//       "Komunikasi Data",
//       "Mesin Listrik",
//       "Elektronika Analog"
//     };
//     string list5[5] = {
//       "Instrumentasi Elektronika dan Kendali",
//       "Mikroprosesor",
//       "PLC dan DCS",
//       "Teknik Pengelolahan Citra",
//       "Ekonomi Teknik",
//     };
//     string list6[5] = {
//       "Sistem Embedded"
//       "Mekatronika",
//       "Otomasi Industri",
//       "Pengolahan Sinyal Digital Lanjut",
//       "Kerja Praktek"
//     };
//     string list7[4] = {
//       "Jaringan Komputer",
//       "Sistem Kendali Lanjut",
//       "Instrumentasi Biomedia",
//       "Computer Vision"
//     };
// };
// struct matkulKimia {
//     string list1[5] = {
//       "Fisika",
//       "Kalkulus",
//       "Kimia Analisis",
//       "Kimia Dasar",
//       "Kimia Organik"
//     };
//     string list2[5] = {
//       "Aljabar Linear",
//       "Kimia Fisika",
//       "Menggambar Teknik",
//       "Neraca Massa",
//       "Pancasila"
//     };
//     string list3[5] = {
//       "Ilmu Bahan dan Korosi",
//       "Matematika Teknik Kimia",
//       "Mikrobiologi Industri",
//       "Neraca Energi",
//       "Penyimpanan dan Transportasi Fluida"
//     };
//     string list4[5] = {
//       "Kewirausahaan",
//       "Kinetika Reaksi Kimia", 
//       "Metodologi Penelitian",
//       "Operasi Perpindahan Massa dan Panas",
//       "Temodinamika"
//     };
//     string list5[5] = {
//       "Ekonomi Teknik",
//       "Operasi Pemisahan Bertingkat",
//       "Pemodelan Matematika",
//       "Perpindahan Panas",
//       "Reaktor Homogen",
//     };
//     string list6[5] = {
//       "Alat Industri Kimia",
//       "Penelitian", 
//       "Pengolahan Limbah",
//       "Perancangan Pabrik Kimia 1",
//       "Reaktor Heterogen"
//     };
//     string list7[5] = {
//       "Kapita Selekta",
//       "Keselamatan Industri",
//       "Manajemen",
//       "Perancangan Alat Proses",
//       "Utilitas"
//     };
// };
// struct matkulTeknologiPangan {
//     string list1 [5] = {
//       "Biologi Sel",
//       "Fisika Dasar",
//       "Kimia Dasar Anorganik",
//       "Matematika Dasar",
//       "Kimia Dasar Organik"
//     };
//     string list2 [5] = {
//       "Kalkulus",
//       "Kimia Analitik",
//       "Komputer Terapan",
//       "Mikrobiologi Umum",
//       "Sifat Bahan Pangan"
//     };
//     string list3 [5] = {
//       "Satuan Operasi",
//       "Statistik",
//       "analisis pangan",
//       "Biokimia Pangan",
//       "Kimia Pangan"
//     };
//     string list4 [5] = {
//       "Ilmu Gizi dan Kesehatan",
//       "Uji Inderawi", 
//       "Manajemen dan Pengendalian Mutu",
//       "Mikrobiologi Pangan dan Pengolahan",
//       "Satuan OperasiIII"
//     };
//     string list5 [5] = {
//       "Ekonomi Teknik",
//       "Pemasaran Produk Pangan",
//       "Penanganan Pascapanen",
//       "Sistem Jaminan Halal",
//       "Pengembangan Produk dan Inovasi Pangan"
//     };
//     string list6[5] = {
//       "Kewirausahaan",
//       "Industri Kuliner Halal",
//       "Manajemen Rantai Pasok Halal",
//       "Perancangan Pabrik",
//       "Teknologi Fermentasi"
//    };
//     string list7[5] = {
//       "Kapita Selekta",
//       "Higiene dan Sanitasi Industri Pangan",
//       "Pangan Fungsional",
//       "Peraturan dan legislasi Pangan",
//       "Toksikologi dan Keamanan Pangan"
//     };
// };
// struct matkulIlmuHadis {
//     string list1[5] = {
//       "Bahasa Arab",
//       "Hifzul Hadis Arbain Nawawi",
//       "Musthalahul Hadis",
//       "Sirah Nabawiyah",
//       "Ulumul Quran"
//     };
//     string list2[5] = {
//       "Filsafat Ilmu",
//       "Ilmu Tafsir",  
//       "Metodologi Penilitian Hadis",
//       "Qiraatul Kutub",
//       "Software Hadis",
//     };
//     string list3[5] = {
//       "Akidah Islam",
//       "Ilmu Rijalil Hadis",
//       "Kitab Hadis Primer",
//       "Kitab Syarah Hadis",
//       "Studi Hadis Di Indonesia"
//     };
//     string list4[5] = {
//       "Akhlak",
//       "Digitalisasi Hadis",
//       "Fiqhul Hadis",
//       "Ilmu Dakwah",
//       "Ilmu Gharibil Hadis"
//     };
//     string list5[5] = {
//       "Hadis Akidah",
//       "Hadis Ibadah",
//       "Ilmu Asbabul Wurud",
//       "Ilmu Mukhtalifil Hadis",
//       "Kitab Hadis Sekunder"
//     };
//     string list6[5] = {
//       "Hadis Akhlak",
//       "Hadis dan Sosial Media",
//       "Hadis Muamalah",
//       "Hadis Sains",
//       "Hifzul Hadis"
//     };
//     string list7[5] = {
//       "Hifzul Hadis Muamalah",
//       "Ilmu Falak",
//       "Kewirausahaan",
//       "Mubaligh Hijrah",
//       "Programing Hadis"
//     };
// };
// struct matkulBSA {
//     string list1 [5] = {
//       "Al-Madkhafi fi al-Nahwi",
//       "Fahmul Maqru' al-ilmiy",
//       "Muhadatsah",
//       "Ulumul Qur'an",
//       "Fahmul Masmu'"
//     };
//     string list2 [5] = {
//       "Ilmu Nahwu Marfu'at",
//       "Islam dan Ilmu Sosial Humaniora",
//       "Khitabah",
//       "Logika",
//       "Pengantar Ilmu Budaya"
//     };
//     string list3 [5] = {
//       "Hiwar",
//       "Ilmu Ma'ani",
//       "Insya' Muwajjah",
//       "Islam dan Sains",
//       "Ilmu Al-Lughah"
//     };
//     string list4 [5] = {
//       "Akhlak dan Tasawuf",
//       "Budaya Arab",
//       "Fahmul Maqru' Al-Adabiy",
//       "Ilmu Bayan",
//       "Kitabah"
//     };
//     string list5 [5] = {
//       "Fiologi",
//       "Ilmu Badi'",
//       "Semantik dan Pragmatik",
//       "Teori Sastra",
//       "Stilistika"
//     };
//     string list6 [5] = {
//       "Editing Terjemah",
//       "Kritik Sastra",
//       "Lahjah Arabiyah",
//       "Sosiolinguistik",
//       "Studi Tokoh Sastra Arab"
//     };
//     string list7 [5] = {
//       "Dramaturgi",
//       "I'jaz Al-quran",
//       "Jurnalistik",
//       "Linguistik Terapan",
//       "Sastra Digital"
//     };
// };
// // struct matkulPBS {
// //     string list1 [5] = {
// //       ""
// //     }
// // }