#pragma once
#include <iostream>
#include <string>

using namespace std; 

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
struct matkulIndustri {
    string list1[5] = {
      "Fisika Dasar",
      "Biologi",
      "Kalkulus Univariat",
      "Pengantar Ilmu Ekonomika",
      "Pengantar Teknik Industri"
    };
    string list2[5] = {
      "Aljabar Linear",
      "Ilmu Bahan",
      "Kalkulus Multivariat",
      "Kapita Selekta",
      "Kelistrikan"
    };
    string list3[5] = {
      "Gambar Teknik",
      "Kesehatan dan Keselamatan Kerja",
      "Matematika Optimisasi",
      "Mekanika Fisika",
      "Teori Probabilitas"
    };
    string list4[5] = {
      "Ergonomika dan Perancangan Sistem Kerja",
      "Ketanakerjaan",
      "Perancangan dan Pengembangan Produk",
      "Perencanaan dan Pengelolaan Produksi"
      "Riset Operasi Stokastik"
    };
    string list5[5] = {
      "Analisis Biaya",
      "Metode Pengukuran Kerja",
      "Pemodelan Sistem",
      "Proses Manufaktur",
      "Sistem Lingkungan Industri"
    };
    string list6[5] = {
      "Analita Data",
      "Ekonomi Teknik",
      "Metodologi Penelitian",
      "Organisasi dan Manajemen Perusahaan Industri",
      "Simulasi Komputer"
    };
    string list7[5] = {
      "Analisis dan Perancangan Sistem Informasi",
      "Kerja Praktik",
      "Metodologi Penelitian Lanjut", 
      "Perancangan Bisnis Perusahaan",
      "Tata letak Fasilitas"
    };
};
struct matkulElektro {
    string list1[5] = {
      "Dasar Komputer dan Pemrograman",
      "Dasar Teknik Elktro",
      "Fisika Elektro",
      "Konversi Energi",
      "Matematika Teknik"
    };
    string list2[5] = {
      "Dasar Elektronika",
      "Pemrograman Lanjut",
      "Probabilitas dan Statistik",
      "Rangkaian Listri", 
      "Pengukuran Besaran Listrik"
    };
    string list3[5] = {
      "Dasar Sistem Telekomunikasi",
      "Metode Numerik",
      "Sistem dan Sinyal",
      "Teknik Digital",
      "Medan Elektromagnetika"
    };
    string list4[5] = {
      "Dasar Sistem Kendali",
      "Elektronika Analog",
      "Komunikasi Data",
      "Mesin Listrik",
      "Elektronika Analog"
    };
    string list5[5] = {
      "Instrumentasi Elektronika dan Kendali",
      "Mikroprosesor",
      "PLC dan DCS",
      "Teknik Pengelolahan Citra",
      "Ekonomi Teknik",
    };
    string list6[5] = {
      "Sistem Embedded"
      "Mekatronika",
      "Otomasi Industri",
      "Pengolahan Sinyal Digital Lanjut",
      "Kerja Praktek"
    };
    string list7[4] = {
      "Jaringan Komputer",
      "Sistem Kendali Lanjut",
      "Instrumentasi Biomedia",
      "Computer Vision"
    };
};
struct matkulKimia {
    string list1[5] = {
      "Fisika",
      "Kalkulus",
      "Kimia Analisis",
      "Kimia Dasar",
      "Kimia Organik"
    };
    string list2[5] = {
      "Aljabar Linear",
      "Kimia Fisika",
      "Menggambar Teknik",
      "Neraca Massa",
      "Pancasila"
    };
    string list3[5] = {
      "Ilmu Bahan dan Korosi",
      "Matematika Teknik Kimia",
      "Mikrobiologi Industri",
      "Neraca Energi",
      "Penyimpanan dan Transportasi Fluida"
    };
    string list4[5] = {
      "Kewirausahaan",
      "Kinetika Reaksi Kimia", 
      "Metodologi Penelitian",
      "Operasi Perpindahan Massa dan Panas",
      "Temodinamika"
    };
    string list5[5] = {
      "Ekonomi Teknik",
      "Operasi Pemisahan Bertingkat",
      "Pemodelan Matematika",
      "Perpindahan Panas",
      "Reaktor Homogen",
    };
    string list6[5] = {
      "Alat Industri Kimia",
      "Penelitian", 
      "Pengolahan Limbah",
      "Perancangan Pabrik Kimia 1",
      "Reaktor Heterogen"
    };
    string list7[5] = {
      "Kapita Selekta",
      "Keselamatan Industri",
      "Manajemen",
      "Perancangan Alat Proses",
      "Utilitas"
    };
};
struct matkulTeknologiPangan {
    string list1 [5] = {
      "Biologi Sel",
      "Fisika Dasar",
      "Kimia Dasar Anorganik",
      "Matematika Dasar",
      "Kimia Dasar Organik"
    };
    string list2 [5] = {
      "Kalkulus",
      "Kimia Analitik",
      "Komputer Terapan",
      "Mikrobiologi Umum",
      "Sifat Bahan Pangan"
    };
    string list3 [5] = {
      "Satuan Operasi",
      "Statistik",
      "analisis pangan",
      "Biokimia Pangan",
      "Kimia Pangan"
    };
    string list4 [5] = {
      "Ilmu Gizi dan Kesehatan",
      "Uji Inderawi", 
      "Manajemen dan Pengendalian Mutu",
      "Mikrobiologi Pangan dan Pengolahan",
      "Satuan OperasiIII"
    };
    string list5 [5] = {
      "Ekonomi Teknik",
      "Pemasaran Produk Pangan",
      "Penanganan Pascapanen",
      "Sistem Jaminan Halal",
      "Pengembangan Produk dan Inovasi Pangan"
    };
    string list6[5] = {
      "Kewirausahaan",
      "Industri Kuliner Halal",
      "Manajemen Rantai Pasok Halal",
      "Perancangan Pabrik",
      "Teknologi Fermentasi"
   };
    string list7[5] = {
      "Kapita Selekta",
      "Higiene dan Sanitasi Industri Pangan",
      "Pangan Fungsional",
      "Peraturan dan legislasi Pangan",
      "Toksikologi dan Keamanan Pangan"
    };
};
struct matkulIlmuHadis {
    string list1[5] = {
      "Bahasa Arab",
      "Hifzul Hadis Arbain Nawawi",
      "Musthalahul Hadis",
      "Sirah Nabawiyah",
      "Ulumul Quran"
    };
    string list2[5] = {
      "Filsafat Ilmu",
      "Ilmu Tafsir",  
      "Metodologi Penilitian Hadis",
      "Qiraatul Kutub",
      "Software Hadis",
    };
    string list3[5] = {
      "Akidah Islam",
      "Ilmu Rijalil Hadis",
      "Kitab Hadis Primer",
      "Kitab Syarah Hadis",
      "Studi Hadis Di Indonesia"
    };
    string list4[5] = {
      "Akhlak",
      "Digitalisasi Hadis",
      "Fiqhul Hadis",
      "Ilmu Dakwah",
      "Ilmu Gharibil Hadis"
    };
    string list5[5] = {
      "Hadis Akidah",
      "Hadis Ibadah",
      "Ilmu Asbabul Wurud",
      "Ilmu Mukhtalifil Hadis",
      "Kitab Hadis Sekunder"
    };
    string list6[5] = {
      "Hadis Akhlak",
      "Hadis dan Sosial Media",
      "Hadis Muamalah",
      "Hadis Sains",
      "Hifzul Hadis"
    };
    string list7[5] = {
      "Hifzul Hadis Muamalah",
      "Ilmu Falak",
      "Kewirausahaan",
      "Mubaligh Hijrah",
      "Programing Hadis"
    };
};
struct matkulBSA {
    string list1 [5] = {
      "Al-Madkhafi fi al-Nahwi",
      "Fahmul Maqru' al-ilmiy",
      "Muhadatsah",
      "Ulumul Qur'an",
      "Fahmul Masmu'"
    };
    string list2 [5] = {
      "Ilmu Nahwu Marfu'at",
      "Islam dan Ilmu Sosial Humaniora",
      "Khitabah",
      "Logika",
      "Pengantar Ilmu Budaya"
    };
    string list3 [5] = {
      "Hiwar",
      "Ilmu Ma'ani",
      "Insya' Muwajjah",
      "Islam dan Sains",
      "Ilmu Al-Lughah"
    };
    string list4 [5] = {
      "Akhlak dan Tasawuf",
      "Budaya Arab",
      "Fahmul Maqru' Al-Adabiy",
      "Ilmu Bayan",
      "Kitabah"
    };
    string list5 [5] = {
      "Fiologi",
      "Ilmu Badi'",
      "Semantik dan Pragmatik",
      "Teori Sastra",
      "Stilistika"
    };
    string list6 [5] = {
      "Editing Terjemah",
      "Kritik Sastra",
      "Lahjah Arabiyah",
      "Sosiolinguistik",
      "Studi Tokoh Sastra Arab"
    };
    string list7 [5] = {
      "Dramaturgi",
      "I'jaz Al-quran",
      "Jurnalistik",
      "Linguistik Terapan",
      "Sastra Digital"
    };
};
struct matkulPBS {
  string list1 [5] = {
    "Fikih dan Usul Fikih",
    "Pengantar Studi Islam", 
    "Tauhid",
    "Manajemen",
    "Matematika Ekonomi"
  };
  string list2 [5] = {
    "Bahasa Arab",
    "Filsafat Ilmu",
    "Pengantar Ekonomi Syariah",
    "Akuntansi Pengantar",
    "Hukum Bisnis"
  };
  string list3 [5] = {
    "Akhlak dan Tasawuf",
    "Manajemen Dana dan Pembiayaan Bank Syariah ",
    "Manajemen Keuangan",
    "Manajemen Pemasaran",
    "Ilmu Ekonomi Syariah"
  };
  string list4 [5] = {
    "Etika Bisnis Islam",
    "Manajemen Keuangan Syariah",
    "Lemabaga Keuangan Islam",
    "Fiqih Muamalah Kontemporer",
    "Akuntansi Perbankan Syariah"
  };
  string list5 [5] = {
    "Komunikasi Bisnis",
    "Manajemen Investasi dan Portofolio Syariah",
    "Manajemen Resiko",
    "Pajak dan Zakat",
    "Perilaku KOnsumen"
  };
  string list6 [5] = {
    "Kebanksentralan dan OJK",
    "Enterprenership",
    "Manajemen Aset dan Liabilitas Bank Syariah",
    "Manajemen Inovasi dan Teknologi",
    "Pemasaran Global"
  };
  string list7 [5] = {
    "Manajemen Strategik",
    "Manajemen Perubahan dan Kepemimpinan", 
    "Riset Pemasaran",
    "Strategik Manajemen Sumber Daya Manusia",
    "Strategik Pemasaran"
  };
};
struct matkulPAI {
  string list1 [5] = {
    "Peradaban Islam",
    "Ulum al Hadis",
    "Ulum al Quran",
    "Ilmu Pendidikan",
    "Pengantar Studi Islam"
  };
  string list2 [5] = {
    "Filsafat Ilmu",
    "Islam Dan Ilmu Sosial Humaniora",
    "Islam dan Sains",
    "Pendidikan Inklusi",
    "Sejarah Kebudayaan Islam"
  };
  string list3 [5] = {
    "Bahasa Arab",
    "Kewirausahaan Pendidikan",
    "Filsafat Pendidikan Islam",
    "Komunikasi Pendidikan",
    "Psikologi Pendidikan"
  };
  string list4 [5] = {
    "Administrasi Pendidikan",
    "Antropologi-Sosiologi Pendidikan",
    "Aqidah Akhlak 1",
    "Pengembangan Kurikulum",
    "Bahasa Inggris"
  };
  string list5 [4] = {
    "Bimbingan Konseling Peserta Didik",
    "Aqidah Akhlak 2",
    "Evaluasi Pembelajaran PAI",
    "Strategi Pembelajaran PAI"
  };
  string list6 [4] = {
    "Micro Teaching",
    "Literasi Media dan Teknologi Pembelajran PAI",
    "Praktek Bisnis Pendidikan",
    "Pengembangan Profesi",
  };
};
struct matkulHUkum {
  string list1 [5] = {
    "Ilmu Negara",
    "Pancasila",
    "Pengantar Hukum Negara",
    "Pengantar Hukum Islam",
    "Pengantar Ilmu Hukum"
  };
  string list2 [5] = {
    "Hukum Adat",
    "Hukum Perdata",
    "Hukum Pidana",
    "Negara dalam Perspektif Hukum Islam",
    "Sistem Informasi Hukum"
  };
  string list3 [5] = {
    "Aqidah Islam",
    "Hukum Administrasi Negara",
    "Hukum Agraria",
    "Hukum Internasional",
    "Hukum Kekeluargaan dan Kewarisan Islam"
  };
  string list4 [5] = {
    "Hukum Acara Mahkamah KOnstitusi",
    "Hukum Acara Perdata",
    "Hukum Acara Pidana",
    "Hukum Acara PTUN",
    "Hukum dan HAM"
  };
  string list5 [5] = {
    "Filsafat Hukum",
    "Hukum Hak Kekayaan Intelektual",
    "Hukum Lingkungan",
    "Hukum Pasar Modal",
    "Hukum Pemerintah Daerah"
  };
  string list6 [5] = {
    "Advokasi dan Ivestigasi",
    "Hukum Ketenagakerjaan",
    "Legal Drafting",
    "Hukum Perniagaan Internasional", 
    "Hukum Organisasi Internasional"
  };
  string list7 [3] = {
    "Analisis Hukum dan Sosial",
    "Etika dan TanggungJawab Profesi",
    "Hukum Kepartaian dan Pemilu"
  };
};
struct matkulEkonomiPembangunan {
  string list1 [5] = {
    "Pengantar Akuntansi",
    "Pengantar Ekonomi Makro",
    "pengantar Ekonomi Mikro",
    "Pengantar Aplikasi Komputer",
    "Matematika 1"
  };
  string list2 [5] = {
    "Matematika II", 
    "Pengantar Bisnis",
    "Pengantar Manajemen",
    "Statistika I",
    "Teori Ekonomi Makro I"
  };
  string list3 [5] = {
    "Digital Ekonomi",
    "Ekonomi Moneter",
    "Ekonomi Pembangunan",
    "Statistika II",
    "Teori Ekonomi Makro II"
  };
  string list4 [5] = {
    "Bank Dan Lembaga Keuangan",
    "Ekonometrika",
    "Ekonomi Internasional",
    "Ekonomi Public",
    "Ekonomi Sumber Daya Manusia"
  };
  string list5 [5] = {
    "Akuntansi Sektor Publik",
    "Ekonometrika II",
    "Ekonomi Sumber Daya Lingkungan",
    "Kebanksentralan",
    "Perekonomian Indonesia"
  };
  string list6 [3] = {
    "Analisis Keuangan dan Investasi",
    "Ekonomi Pertahanan Dan Tata Kota",
    "Evaluasi Proyek",
  };
  string list7 [2] = {
    "Bahasa Inggris Ekonomi",
    "Ekonomi Politik"
  };
};
struct matkulManajemen {
    string list1 [5] = {
      "Matematika Ekonomi",
      "Pengantar Bisnis",
      "Pendidika Agama Islam",
      "Pengantar Akuntansi",
      "Statistika Ekonomi"
    };
    string list2 [5] = {
      "Bank Dan Lembaga Keuangan non Bank",
      "Perekonomian Indonesia",
      "Pengantar Ekonomi Mikro",
      "Komunikasi Bisnis",
      "Bahasa Inggris Niaga"
    };
    string list3 [5] = {
      "Akuntansi Biaya",
      "Pengantar Ekonomi Makro",
      "Hukum Bisnis",
      "Sistem Informasi Manajemen",
      "Hubungan Industrial"
    };
    string list4 [5] = {
      "Manajemen Operasi",
      "Riset Operasi",
      "Manajemen Sumber Daya Manusia",
      "Ekonomi Moneter",
      "Ekonomi Managerial"
    };
    string list5 [5] = {
      "Pengembangan SDM",
      "Manajemen Keuangan",
      "Manajemen Strategik",
      "Perilaku Konsumen",
      "Perilaku Organisasi"
    };
    string list6 [5] = {
      "Manajemen Operasi Jasa",
      "Akuntansi Manajemen", 
      "Audit SDM",
      "Manajemen Rantai Pasokan",
      "Analisis Kasus Bisnis"
    };
    string list7 [5] = {
      "Pemasaran Jasa",
      "Manajemen Resiko dan Asuransi",
      "Pemasaran Strategik",
      "Penganggaran",
      "Manajemen Kinerja"
    };
};
struct matkulAkuntansi {
    string list1 [5] = {
      "Al-quran Dan Hadis",
      "Matematika I",
      "Pengantar Akuntansi",
      "Pengantar Ekonomi Makro",
      "Pengantar Ekonomi Mikro"
    };
    string list2 [5] = {
      "Matematika II",
      "Pendidikan Kewarganegaraan",
      "Pengantar Bisnis",
      "Pengantar Manajemen",
      "Statistika I"
    };
    string list3 [5] = {
      "Digital Ekonomi",
      "Ekonomi Moneter",
      "Ekonomi Pembangunan",
      "Statistika II",
      "Fiqih Ibadah"
    };
    string list4 [5] = {
      "Akhlak",
      "Bank dan Lembaga Keuangan",
      "Ekonomi Internasional",
      "Ekonomi Public",
      "Ekonomi Sumber Daya Manusia"
    };
    string list5 [5] = {
      "Akuntansi Sektor Publik",
      "Ekonometrika II",
      "Ekonomi Sumber Daya Lingkungan",
      "Kebanksentralan",
      "Perekonomian Indonesia"
    };
    string list6 [5] = {
      "Analisis Laporan Keuangan",
      "Sistem Pengendalian Manajemen",
      "Akuntansi Manajemen Strategik",
      "Pengauditan INternal",
      "Akuntansi dan Akuntabilitas"
    };
    string list7 [5] = {
      "Perencanaan Pajak",
      "International Taxation",
      "Akuntansi Syariah",
      "Matematika II",
      "Pemasaran"
    };
};
struct matkulBJM {
    string list1 [5] = {
      "Bahasa Inggris",
      "Gizi Dasar",
      "Kehalalan Pangan",
      "Manajemen Dasar Bisnis Makanan",
      "Pengantar Hospitaly"
    };
    string list2 [5] = {
      "Higiene Sanitasi Makanan",
      "Komunikasi Bisnis Kuliner",
      "Kuliner Nusantara",
      "Perencanaan Produk",
      "Pancasila"
    };
    string list3 [5] = {
      "Aqidah Islam",
      "Gizi Terapan",
      "Keamanan Pangan",
      "Manajemen Mutu Pangan",
      "Pastry Bakery"
    };
    string list4 [5] = {
      "Etika dan Hukum Bisnis Kuliner",
      "Keselamatan dan Kesehatan Kerja",
      "Manajemen Bisnis Kuliner",
      "Pengolahan Makanan Oriental Kontinental",
      "Sistem Informasi Bisnis Kuliner"
    };
    string list5 [5] = {
      "Bahasa Indonesia",
      "Fiqih Ibadah",
      "Matematika Terapan",
      "Statistik Terapan",
      "Bahasa Inggris IV"
    };
    string list6 [3] = {
      "Praktik Akuntansi Bisnis Kuliner",
      "Praktik Kewirausahaan",
      "Strategi Bisnis"
    };
    string list7 [3] = {
      "Islam Interdisipliner",
      "Praktik Kerja Lapangan",
      "WorkshopvIndustri"
    };
};
struct matkulFarmasi {
    string list1 [5 ]= {
      "MPKT II",
      "MPK B.Inggris",
      "Kimia Organik",
      "Ilmu Biomedik Dasar",
      "Etika Dan Hukum Bidang Kesehatan"
    };
    string list2 [5] = {
      "Biologi sel dan Molekuler",
      "Farmasetika",
      "Farmasi Fisika I",
      "Kimia Organik 2",
      "Analisis Farmasi Dasar"
    };
    string list3 [5] = {
      "Analisis Fisikokimia",
      "Mikrobiologi Faramasi",
      "Farmakologi Dasar",
      "Analisis Bahan Baku Farmasi",
      "Biokimia"
    };
    string list4 [5] = {
      "Teknologi Sediaan Padat",
      "Farmakgnosi",
      "Imunologi Virologi",
      "Obat Inflamasi",
      "Pengelolaan Bencana"
    };
    string list5 [5] = {
      "Biofarmasetika",
      "Farmakokinetika",
      "Obat Gangguan Saraf",
      "Kimia Medisinal",
      "Fitokimia I"
    };
    string list6 [3] = {
      "Obat Infeksi dan Neoplasma",
      "Analisis Sediaan Farmasi",
      "Pelayanan Kefarmasian"
    };
    string list7 [3] = {
      "Aseptik Dispensing",
      "Farmakoterapi",
      "Praktikum Teknologi Sediaan Steril"
    };
};
struct matkulApoteker {
    string list1 [5] = {
      "Farmakoterapi Terapan",
      "Farmasi Komunitas",
      "Undang-Undang Dan Etika Farmasi",
      "Farmasi Rumash Sakit",
      "Farmasi Industri"
    };
    string list2 [5] = {
      "PKPA di Apotik",
      "PKPA di Rumah Sakit dan Puskesmas",
      "PKPA di Industri Farmasi",
      "Distribusi dan Pemasaran Sediaan Farmasi",
      "Alat Kesehatan"
    };
};
struct matkulKedokteran {
    string list1 [5] = {
      "Ketermpilan Belajar dan Kedokteran Dasar",
      "Sistem Muskulo Skeletal",
      "Sistem Neurosensori dan Alat Indera",
      "Alquran dan Hadis",
      "Bahasa Inggris",
    };
    string list2 [5] = {
      "Endokrin dan Reproduksi",
      "Sistem Digesti dan urinaria",
      "Sistem Kardiovaskuler, Respirasi, dan Hermatologi",
      "Pancasila",
      "Kebencanaan I"
    };
    string list3 [5] = {
      "Imunitas dan Neoplasma",
      "Kehamilan dan Masalah Reproduksi",
      "Neonatus dan Masa Kanak-Kanak",
      "Aqidah Islam",
      "Bahasa indonesia"
    };
    string list4 [5] = {
      "Masalah Imunologi dan Infeksi",
      "Masalah pada Sistem Disgesti dan Urinaria",
      "Masalah Pada Sistemm Kardiovaskular, Respirasi, dan Hematologi",
      "Pendidikan Kewarganegaraan",
      "Kebencanaan II"
    };
    string list5 [5] = {
      "Penelitian",
      "Masalah Endokrin, Metabolik, dan Nutrisi",
      "Masalah Sistem Indera",
      "Fiqih Ibadah",
      "Kebencanaan III"
    };
    string list6 [4] = {
      "Lansia",
      "Psikiatri",
      "Masalah Sistem Neuromuskulo Skeletal",
      "Kebencanaan"
    };
    string list7 [5] = {
      "Kegawatdaruratan",
      "Sistem Pelayanan Kesehatan",
      "Kebencanaan",
      "Islam Interdisipliner",
      "Kewirausahaan"
    };
};
struct matkulKesmas {
    string list1 [5] = {
      "Biomedik 1",
      "Etika dan Hukum Kesehatan",
      "Sosiologi dan Antropologi Kesehatan",
      "Pengantar Ilmu Kesehatan Masyarakat",
      "Filsafat Ilmu"
    };
    string list2 [5] = {
      "Dasar Epidemiologi",
      "Dasar Ilmu Gizi",
      "Dasar Administrasi dan Kebijakan Kesehatan",
      "Biomedik II",
      "Kesehatan Reproduksi Masyarakat"
    };
    string list3 [5] = {
      "Dasar Kesehatan Lingkungan",
      "Dasar Kesehatan dan Keselamatan Kerja",
      "Epidemiologi Penyakit Menular",
      "Pengembangan Kelompok Kesehatan Masyarakat",
      "Pengantar Gizi Masyarakat"
    };
    string list4 [5] = {
      "Penerapan Agama Dalam Kesehatan Masyarakat",
      "Aplikasi Dasar Biostatistika",
      "Pemberdayaan Masyarakat di Bidang Kesehatan",
      "Kewirausahaan di Bidang Kesehatan",
      "Epidemiologi Penyakit Tidak Menular"
    };
    string list5 [5] = {
      "Dasar Media Komunikasi, Informasi, dan Edukasi di Bidang Kesehatan Masyarakat",
      "Analisis Kualitas Lingkungan",
      "Ekonomi Kesehatan",
      "Wabah dan Manajemen Bencana",
      "Perencanaan dan Evaluasi Progra, Kesehatan Masyarakat"
    };
    string list6 [5] = {
    "Pembiayaan dan Penganggaran Kesehatan",
    "Promosi Kesehatan Institusi",
    "Psikologi Kesehatan",
    "Indikator dan Pengukuran Promosi Kesehatan",
    "Pengmembangan Media Promosi Kesehatan"
    };
    string list7 [3] = {
      "Metodologi Penelitian Aplikasi dan Praktikum",
      "Pemberdayaan Masyarakat di Bidang Kesehatan",
      "Politik Kesehatan",
    };
};
struct matkulpsikologi {
    string list1 [5] = {
      "Kode Etik Psikologi",
      "Psikologi Dasar",
      "Psikologi Perkembangan Anak",
      "Sejarah & Aliran Psikologi",
      "Bahasa Indonesia",
    };
    string list2 [5] = {
      "Biopsikologi",
      "Filsafat Manusia",
      "Psikologi Perkembangan Remaja, Dewasa, dan Lansia",
      "Pengantar Psikodiagnostik",
      "Statistika Dasar"
    };
    string list3 [5] = {
      "Kesehatan Mental",
      "Psikologi Abnormal",
      "psikologi Belajar",
      "Psikologi Sosial Terapan",
      "Statistika Inferensial"
    };
    string list4 [5] = {
      "Observasi Wawancara",
      "Perilaku Organisasi",
      "Psikologi Kelompok",
      "Psikologi Klinis",
      "Psikologi Pendidikan"
    };
    string list5 [5] = {
      "Konstruksi Alat Ukur", 
      "Pengembangan Diri Dan Karir",
      "Psikologi Komunitas",
      "Psikologi Konseling",
      "Psikologi Proyektif"
    };
    string list6 [5] = {
      "Modifikasi Prilaku",
      "Pengembangan Organisasi Intervensi",
      "Praktek Konseling",
      "Kewirausahaan",
      "Kemuhammadiyaan"
    };
    string list7 [3] = {
      "Psikologi Anak dan Remaja Berkebutuhan Khusus",
      "Psikologi Islami",
      "Islam Interdisipliner"
    };
};
struct matkulMatematika {
    string list1 [5] = {
      "Aljabar Linier",
      "Algoritma dan Pemrograman",
      "Bahasa Inggris",
      "Fisika Dasar",
      "Fondasi Matematika"
    };
    string list2 [5] = {
      "Aljabar Linier2",
      "Biologi Dasar",
      "Kalkulus2",
      "Kimia Dasar",
      "Metode Statistika"
    };
    string list3 [5] = {
      "Analisis Real1",
      "Bahasa Indonesia",
      "Kalkulus Multivariat",
      "Geometri"
    };
    string list4 [5] = {
      "Analisis Real2",
      "Kalkullus Vector",
      "Matematika Diskrit",
      "Metode Optimasi",
      "Permsamaan Diferensial Biasa"
    };
    string list5 [5] = {
      "Analisis Regresi",
      "Fungsi Kompleks",
      "Metode Numerik",
      "Metode Optimasi",
      "Persamaan Diferensial Parsial"
    };
    string list6 [5] = {
      "Pemodelan Matematika",
      "Kapita Selekta",
      "Teori Sampling",
      "Aljabar Boole",
      "Aljabar Latis"
    };
    string list7 [3] = {
      "Analisis Survival",
      "Artificial Neural Network",
      "Biostatistika"
    };
};
struct matkulFisika {
    string list1 [5] = {
      "Bahasa Inggris",
      "Elektronika Analog",
      "Fisika Dasar1",
      "Fisika Mutahir",
      "Pemrograman Dasar"
    };
    string list2 [5] = {
      "Bahasa Indonesia",
      "Biokimia Terapan",
      "Elektronika Digital",
      "Fisika Dasar2",
      "Fisika Matematika"
    };
    string list3 [5] = {
      "Aqidah Islam",
      "Fisika Matematika2",
      "Fisika Modern",
      "Listrik Magnet",
      "Sensor dan Akuator"
    };
    string list4 [5] = {
      "Eksperimen Metrologi",
      "Fisika Aton dan Inti",
      "Fisika Material",
      "Instrumentasi",
      "Mikroprosesor"
    };
    string list5 [5] = {
      "Fisika Komputasi",
      "Fisika Kuantum",
      "Fisika Statistika",
      "Fisika Zat Padat",
      "Komunikasi Efektif"
    };
    string list6 [5] = {
      "Dasar Sistem Kendali",
      "Fisika Reaktor",
      "Kalibrasi Ala-Alat Kesehatan",
      "Kalibrasi Pesawat Sinar-X"
      "Kendali Logika Terprogram"
    };
    string list7 [3] = {
      "Instrumentasi Kebencanaan",
      "Instrumentasi Medis",
      "Kecerdasan Buatan"
    };
};
struct matkulBiologi {
    string list1 [5] = {
      "Bahasa Indonesia",
      "Biofisika",
      "Biologi Dasar",
      "Biologi Sel",
      "Kimia Dasar"
    };
    string list2 [5] = {
      "Biologi Molekuler",
      "Biosistematika",
      "Biostatistika",
      "Histologi",
      "Mikrobiologi"
    };
    string list3 [5] = {
      "Biodiversitas",
      "Evolusi",
      "Keanekaragaman Hewan",
      "Keanekaragaman Mikrob",
      "Keanekaragaman Tumbuhan"
    };
    string list4 [5] = {
      "Fisiologi Hewan",
      "Fisiologi Mikrob",
      "Genetika",
      "Islam Interdisipliner",
      "Pendidikan Kewarganegaraan"
    };
    string list5 [5] = {
      "Ekologi",
      "Kewirausahaan",
      "Kultur Jaringan",
      "Mikroteknik",
      "Sistematika Molekuler"
    };
};
struct matkulSistemInformasi {
    string list1 [5] = {
      "Bahasa Inggris",
      "Dasar Pemrograman",
      "Kepemimpinan dan Manajemen Organisasi",
      "Konsep Sistem Informasi",
      "Komunikasi Interpersonal"
    };
    string list2 [5] = {
      "Algoritma dan Pemrograman",
      "Analisis Proses Bisnis",
      "Aqidah Islam",
      "Konsep Basis Data",
      "Matematika Diskrit"
    };
    string list3 [5] = {
      "Akhlak",
      "Analisis Kebutuhan Sistem Informasi",
      "Konsep Kecerdasan Buatan", 
      "Pengembangan Perangkat Lunak",
      "Sistem Basis Data"
    };
    string list4 [5] = {
      "Arsitektur Enterprise",
      "Desain dan Pengembangan Sistem Informasi",
      "Jaringan Komputer",
      "Keamanan Informasi",
      "Teknologi Mobile"
    };
    string list5 [5] = {
      "Audit Sistem Informasi",
      "Infrastruktur TI untuk Organisasi",
      "Manajemen Layanan Teknologi Informasi",
      "Manajemen Proyek Sistem Informasi",
      "Manajemen Resiko Sistem Informasi"
    };
    string list6 [5] = {
      "Bahasa Indonesia",
      "Capstone Project",
      "Etika Profesi",
      "Kapita Selekta",
      "E-Business"
    };
    string list7 [3] = {
      "Administrasi Sistem dan Jaringan",
      "Arsitektur dan Organisasi Komputer",
      "Business Intelligence"
    };
};
struct matkulSastraInggris {
    string list1 [5] = {
      "Basic English Grammar",
      "Digital Literacy dan Communication",
      "Etiket Kepribadian",
      "Introduction To Journalism",
      "Language, Culture, & Society"
    };
    string list2 [5] = {
      "English Pronunciation",
      "Intermidate English Grammar",
      "Introduction To American Studies",
      "Introduction To Linguistic",
      "Introduction To Literature"
    };
    string list3 [5] = {
      "Advanced English Grammar",
      "Bahasa Indonesia",
      "Basic Translation",
      "Cross Culture Understanding",
      "Pancasila"
    };
    string list4 [5] = {
      "Pendidikan Kewarganegaraan",
      "Profesional English For Business Communication",
      "Techniques In Writing Paper",
      "American History",
      "American Political System"
    };
    string list5 [5] = {
      "Professional English For Business Report",
      "Technical Translation",
      "Arabic1",
      "Gender Studies",
      "Interpreting"
    };
    string list6 [5] = {
      "Research Methods On American Studies",
      "Research Methods On Lingustic",
      "Research Methods On Literature",
      "American Cinema",
      "American Imperialism"
    };
    string list7 [3] = {
      "Copywriting & Content Writing",
      "Editing",
      "Proofreading",
    };
};
struct matkulSastraIndonesia {
    string list1 [5] = {
      "Pendidikan Kewarganegaraan",
      "Pancasila",
      "Bahasa Indonesia",
      "Statistika",
      "Bahasa Inggris"
    };
    string list2 [5] = {
      "Tranfromasi Digital",
      "Tata Bahasa Tradisional",
      "Fiksi",
      "Sastra Lama",
      "Sastra Anak"
    };
    string list3 [5] = {
      "Morfologi",
      "Tata Bahasa Struktural",
      "Penyuntigan",
      "Statistika",
      "Sosiologi Sastra"
    };
    string list4 [5] = {
      "Sintaksis",
      "Sosiolinguistik",
      "Psikologi Sastra",
      "Kritik Sastra",
      "Teori Drama"
    };
    string list5 [5] = {
      "Bahasa Inggris Terjemahan",
      "Analisis Wacana",
      "Pragmatic",
      "Estetika",
      "Sastra Perbandingan",
    };
    string list6 [5] = {
      "Antropolinguistik",
      "Filsafat Bahasa",
      "Analsis Bahasa",
      "Perencanaan Bahasa",
      "Tata Bahasa Transfonasional"
    };
    string list7 [3] = {
      "KKN",
      "Praktik Kerja Lapangan",
      "Tugas"
    };
};
struct matkulIlkom {
    string list1 [5] = {
      "Pengantar ilmu Komunikasi",
      "Etika Dan Filsafat Komunikasi",
      "Komunikasi Antar Pribadi",
      "Komunikasi Kelompok",
      "Teori Komunikasi"
    };
    string list2 [5] = {
      "Dasar - Dasar Jurnalistik",
      "Pengantar Periklanan",
      "Dasar - Dasar Manajemen",
      "Dasar - Dasar Humas",
      "Jurnalistic Media Massa"
    };
    string list3 [5] = {
      "Psikologi Komunikasi",
      "Etika Profesi Komunikasi",
      "Teknologi Komunikasi",
      "Jurnalistik Online",
      "Komunikasi Pemasaran Terpadu"
    };
    string list4 [5] = {
      "Hukum Media Massa",
      "Komunikasi Antar Budaya",
      "Sosiologi Komunikasi",
      "Public Speaking",
      "Manajemen Periklanan"
    };
    string list5 [5] = {
      "Komunikasi Massa",
      "Metode Riset Kualitatif",
      "Bahasa Inggris", 
      "Pendidikan Bela Negara",
      "Kewirausahaan"
    };
    string list6 [5] = {
      "Kepemimpinan",
      "Pendidikan Pancasila",
      "Agama Islam",
      "Media dan Industri Kreatif",
      "Komunikasi Politik"
    };
    string list7 [3] = {
      "Skripsi",
      "KKN",
      "Praktek Kerja Lapangan"
    };
};
