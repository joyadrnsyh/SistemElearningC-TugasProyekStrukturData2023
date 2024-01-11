#include <iostream>
#include <algorithm>
#define MAX_SIZE 100

using namespace std;

class TaskStack {
private:
    struct Task {
        string taskName;
        string startDate;
        string endDate;
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

    void push(string task, string startDate, string endDate) {
        if (isFull()) {
            cout << "Stack penuh, tidak bisa menambahkan tugas lagi." << endl;
            return;
        }
        tasks[++top] = {task, startDate, endDate};
        cout << "Tugas berhasil ditambahkan." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Tidak ada tugas yang bisa dihapus." << endl;
            return;
        }
        cout << "Tugas '" << tasks[top].taskName << "' telah dihapus." << endl;
        top--;
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

    void sortByStartDate() {
        sort(tasks, tasks + top + 1, [](const Task& a, const Task& b) {
            return a.startDate < b.startDate;
        });
    }

    void sortByEndDate() {
        sort(tasks, tasks + top + 1, [](const Task& a, const Task& b) {
            return a.endDate < b.endDate;
        });
    }
};

int addTugasNew() {
    TaskStack taskStack;
    int choice;
    string task, startDate, endDate;

    do {
        cout << "Menu:\n1. Tambah Tugas\n2. Lihat Tugas\n3. Keluar\nPilih: ";
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

                taskStack.push(task, startDate, endDate);
                break;
            case 2:
                int viewChoice;
                cout << "Menu Lihat Tugas:\n1. Tampilkan semua tugas\n2. Sorting berdasarkan Tanggal Mulai\n3. Sorting berdasarkan Tanggal Selesai\nPilih: ";
                cin >> viewChoice;

                if (viewChoice == 1) {
                    taskStack.displayTasks();
                } else if (viewChoice == 2) {
                    taskStack.sortByStartDate();
                    cout << "Tugas berhasil diurutkan berdasarkan tanggal mulai." << endl;
                    taskStack.displayTasks();
                } else if (viewChoice == 3) {
                    taskStack.sortByEndDate();
                    cout << "Tugas berhasil diurutkan berdasarkan tanggal selesai." << endl;
                    taskStack.displayTasks();
                } else {
                    cout << "Pilihan tidak valid." << endl;
                }
                break;
            case 3:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (choice != 3);

    return 0;
}
