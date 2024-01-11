#include <iostream>
#include <algorithm>
#include <string>
#include "../presensiMahasiswa107/main.h"

#define MAX_SIZE 100

using namespace std;

class TaskStack {
private:
    struct Task {
        string taskName;
        string startDate;
        string endDate;
        string fileType; // New attribute for file type
    };

    Task tasks[MAX_SIZE];
    int top;

public:
    TaskStack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(string task, string startDate, string endDate, string fileType) {
        if (isFull()) {
            cout << "Stack penuh, tidak bisa menambahkan tugas lagi." << endl;
            return;
        }
        tasks[++top] = {task, startDate, endDate, fileType};
        cout << "Tugas berhasil ditambahkan." << endl;
    }

    // Existing methods remain the same...

    void displayTasksByFileType(string fileType) {
        if (isEmpty()) {
            cout << "Tidak ada tugas dalam daftar." << endl;
            return;
        }
        cout << "Daftar Tugas Berdasarkan Jenis File '" << fileType << "':" << endl;
        for (int i = top; i >= 0; --i) {
            if (tasks[i].fileType == fileType) {
                cout << "Tugas: " << tasks[i].taskName << endl;
                cout << "Tanggal Mulai: " << tasks[i].startDate << endl;
                cout << "Tanggal Selesai: " << tasks[i].endDate << endl;
                cout << "------------------" << endl;
            }
        }
    }

    void displayTasks() {
        if (isEmpty()) {
            cout << "Tidak ada tugas dalam daftar." << endl;
            return;
        }
        cout << "Daftar Tugas:" << endl;
        for (int i = top; i >= 0; --i) {
            cout << "Tugas: " << tasks[i].taskName << endl;
            cout << "Tanggal Mulai: " << tasks[i].startDate << endl;
            cout << "Tanggal Selesai: " << tasks[i].endDate << endl;
            cout << "------------------" << endl;
        }
    }
};

int ftrtambahTugas() {
    TaskStack taskStack;
    int choice;
    string task, startDate, endDate, fileType;

    do {
        cout << "Menu:\n1. Tambah Tugas\n2. Lihat Tugas\n3. Presensi\n4. Keluar\nPilih: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan tugas: ";
                cin.ignore();
                getline(cin, task);

                cout << "Masukkan tanggal mulai (DD/MM/YYYY): ";
                cin >> startDate;

                cout << "Masukkan tanggal selesai (DD/MM/YYYY): ";
                cin >> endDate;

                cout << "Masukkan jenis file: ";
                cin >> fileType;

                taskStack.push(task, startDate, endDate, fileType);
                break;
            case 2:
                int viewChoice;
                cout << "Menu Lihat Tugas:\n1. Tampilkan semua tugas\n2. Tampilkan berdasarkan Tipe File\nPilih: ";
                cin >> viewChoice;

                if (viewChoice == 1) {
                    taskStack.displayTasks();
                } else if (viewChoice == 2) {
                    string fileFilter;
                    cout << "Masukkan jenis file untuk ditampilkan: ";
                    cin >> fileFilter;
                    taskStack.displayTasksByFileType(fileFilter);
                } else {
                    cout << "Pilihan tidak valid." << endl;
                }
                break;
            case 3:
                fiturpresensi();
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (choice != 4);

    return 0;
}
