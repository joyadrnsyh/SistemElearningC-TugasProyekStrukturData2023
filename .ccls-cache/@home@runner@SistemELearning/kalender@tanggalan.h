#include <iostream>
#include <ctime>
using namespace std;

// Fungsi untuk menentukan apakah suatu tahun adalah tahun kabisat atau bukan
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

// Fungsi untuk menampilkan kalender tanggalan
void printCalendar(int month, int year) {
    const string months[] = {
        "Januari", 
        "Februari",
        "Maret",
        "April",
        "Mei",
        "Juni",
        "Juli",
        "Agustus",
        "September",
        "Oktober",
        "November",
        "Desember"
    };
   int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Cek apakah tahun adalah tahun kabisat
    if (isLeapYear(year)) {
        daysInMonth[1] = 29; // Tahun kabisat, Februari memiliki 29 hari
    }

    // Output kalender
    cout << "Kalender untuk " << months[month - 1] << " " << year << ":" << endl;
    cout << "Min Sen Sel Rab Kam Jum Sab" << endl;

    struct tm timeinfo = {0};
    timeinfo.tm_year = year - 1900;
    timeinfo.tm_mon = month - 1;
    timeinfo.tm_mday = 1;
    mktime(&timeinfo);
    int dayOfWeek = timeinfo.tm_wday;

    for (int i = 0; i < dayOfWeek; i++) {
        cout << "    ";
    }

    for (int day = 1; day <= daysInMonth[month - 1]; day++) {
        printf("%3d ", day);
        if (++dayOfWeek > 6) {
            dayOfWeek = 0;
            cout << endl;
        }
    }
    cout << endl;
}
struct kalender{
  string bulan[12] = {
    "Januari",
    "Februari",
    "Maret",
    "April",
    "Mei", 
    "Juni",
    "July",
    "Agustus",
    "September",
    "Oktober",
    "November",
"Desember"
  };
};
int kalender() {

    int month, year;

    cout << "Masukkan bulan (1-12): ";
    cin >> month;
    cout << "Masukkan tahun: ";
    cin >> year;

    if (month >= 1 && month <= 12) {
        printCalendar(month, year);
    } else {
        cout << "Bulan yang dimasukkan tidak valid. Harap masukkan angka antara 1 dan 12." << endl;
    }

    return 0;
}
