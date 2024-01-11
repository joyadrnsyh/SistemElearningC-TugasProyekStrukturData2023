#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    char kelas;
};

void displayMahasiswa(queue<Mahasiswa> data) {
    cout << "Data Mahasiswa (terurut berdasarkan NIM, Nama, dan Kelas):" << endl;
    while (!data.empty()) {
        cout << "NIM: " << data.front().nim << ", Nama: " << data.front().nama << ", Kelas: " << data.front().kelas << endl;
        data.pop();
    }
}

bool compareNIM(const Mahasiswa& a, const Mahasiswa& b) {
    return a.nim < b.nim;
}

bool compareNama(const Mahasiswa& a, const Mahasiswa& b) {
    return a.nama < b.nama;
}

bool compareKelas(const Mahasiswa& a, const Mahasiswa& b) {
    return a.kelas < b.kelas;
}

void tambahMahasiswa(queue<Mahasiswa>& data) {
    if (data.size() >= 100) {
        cout << "Data sudah penuh, tidak bisa menambahkan mahasiswa lagi." << endl;
        return;
    }

    Mahasiswa mhs;
    cout << "NIM mahasiswa: ";
    cin >> mhs.nim;
    cin.ignore();
    cout << "Nama mahasiswa: ";
    getline(cin, mhs.nama);
    cout << "Kelas mahasiswa: ";
    cin >> mhs.kelas;

    data.push(mhs);
}

void lihatPresensi(queue<Mahasiswa> data) {
    int pilihan;
    cout << "Pilih opsi untuk melihat presensi:" << endl;
    cout << "1. Lihat berdasarkan NIM" << endl;
    cout << "2. Lihat berdasarkan Nama" << endl;
    cout << "3. Lihat berdasarkan Kelas" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            // Sorting queue berdasarkan NIM
            {
                queue<Mahasiswa> temp = data;
                vector<Mahasiswa> tempVec;
                while (!temp.empty()) {
                    tempVec.push_back(temp.front());
                    temp.pop();
                }
                sort(tempVec.begin(), tempVec.end(), compareNIM);
                for (const auto& student : tempVec) {
                    cout << "NIM: " << student.nim << ", Nama: " << student.nama << ", Kelas: " << student.kelas << endl;
                }
            }
            break;
        case 2:
            // Sorting queue berdasarkan Nama
            {
                queue<Mahasiswa> temp = data;
                vector<Mahasiswa> tempVec;
                while (!temp.empty()) {
                    tempVec.push_back(temp.front());
                    temp.pop();
                }
                sort(tempVec.begin(), tempVec.end(), compareNama);
                for (const auto& student : tempVec) {
                    cout << "NIM: " << student.nim << ", Nama: " << student.nama << ", Kelas: " << student.kelas << endl;
                }
            }
            break;
        case 3:
            // Sorting queue berdasarkan Kelas
            {
                queue<Mahasiswa> temp = data;
                vector<Mahasiswa> tempVec;
                while (!temp.empty()) {
                    tempVec.push_back(temp.front());
                    temp.pop();
                }
                sort(tempVec.begin(), tempVec.end(), compareKelas);
                for (const auto& student : tempVec) {
                    cout << "NIM: " << student.nim << ", Nama: " << student.nama << ", Kelas: " << student.kelas << endl;
                }
            }
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }
}

void presensiMahasiswa() {
    queue<Mahasiswa> dataMahasiswa;
    int menu;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Lihat Presensi" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> menu;

        switch (menu) {
            case 1:
                tambahMahasiswa(dataMahasiswa);
                break;
            case 2:
                lihatPresensi(dataMahasiswa);
                break;
            case 3:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    } while (menu != 3);
}

int fiturpresensi() {
    presensiMahasiswa();
    return 0;
}
