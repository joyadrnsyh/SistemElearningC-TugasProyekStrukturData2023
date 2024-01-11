#include <iostream>
#include <algorithm>
#define MAX_SIZE 100

using namespace std;

struct MataKuliah {
    string namaMatkul;
};

class TaskStack {
private:
    struct Task {
        string taskName;
        string startDate;
        string endDate;
        string course;
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

    void push(string task, string startDate, string endDate, string course) {
        if (isFull()) {
            cout << "Stack penuh, tidak bisa menambahkan tugas lagi." << endl;
            return;
        }
        tasks[++top] = {task, startDate, endDate, course};
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
            cout << "Mata Kuliah: " << tasks[i].course << endl;
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

int daftarTugas() {
    MataKuliah mataKuliah[5] = {{"Matematika"}, {"Fisika"}, {"Kimia"}, {"Biologi"}, {"Bahasa Inggris"}};
    TaskStack taskStack;
    int choice, courseChoice;
    string task, startDate, endDate, course;

    do {
        cout << "Menu:\n1. Pilih Mata Kuliah\n2. Tambah Tugas\n3. Lihat Tugas\n4. Keluar\nPilih: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Pilih Mata Kuliah:" << endl;
                for (int i = 0; i < 5; ++i) {
                    cout << i + 1 << ". " << mataKuliah[i].namaMatkul << endl;
                }
                cout << "Pilih: ";
                cin >> courseChoice;
                if (courseChoice >= 1 && courseChoice <= 5) {
                    course = mataKuliah[courseChoice - 1].namaMatkul;
                    cout << "Mata Kuliah '" << course << "' dipilih." << endl;
                } else {
                    cout << "Pilihan tidak valid." << endl;
                }
                break;
            case 2:
                if (course.empty()) {
                    cout << "Pilih Mata Kuliah terlebih dahulu." << endl;
                    break;
                }

                cout << "Masukkan tugas: ";
                cin.ignore();
                getline(cin, task);

                cout << "Masukkan tanggal mulai (DD/MM/YYYY): ";
                cin >> startDate;

                cout << "Masukkan tanggal selesai (DD/MM/YYYY): ";
                cin >> endDate;

                taskStack.push(task, startDate, endDate, course);
                break;
            case 3:
                taskStack.displayTasks();
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