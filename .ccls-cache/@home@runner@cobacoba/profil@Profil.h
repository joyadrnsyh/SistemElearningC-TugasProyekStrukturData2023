#pragma once
#include <iostream>
#include <string>
#include "../menuUtama/function.h"
#include "../tambahPerkuliahan/function.h"
using namespace std;

struct User {
  string username;
  string password;
  string name;
  string address;
  string phoneNumber;
};

int portalMenu(User& user) {

    lihatMenu(3, 0);

  return 0;
}

int profil() {
  const int maxUsers = 100;
  User users[maxUsers];
  int numUsers = 0;

  while (true) {
    cout << "Selamat datang di Portal\n";
    cout << "1. Login\n";
    cout << "2. Buat Akun\n";
    cout << "Pilih menu: ";

    int choice;
    cin >> choice;

    if (choice == 1) { // Login
      string username, password;
      bool loggedIn = false;

      cout << "Masukkan username: ";
      cin >> username;
      cout << "Masukkan password: ";
      cin >> password;

      for (int i = 0; i < numUsers; i++) {
        if (users[i].username == username && users[i].password == password) {
          cout << "Login berhasil. Selamat datang, " << users[i].name << "!\n";
          loggedIn = true;
          portalMenu(users[i]);
          break;
        }
      }

      if (!loggedIn) {
        cout << "Username atau password salah. Coba lagi.\n";
      }
    } else if (choice == 2) { // Buat Akun
      if (numUsers < maxUsers) {
        string newUsername, newPassword, newName, newAddress, newPhoneNumber;

        cout << "Masukkan username baru: ";
        cin >> newUsername;
        cout << "Masukkan password baru: ";
        cin >> newPassword;
        cout << "Masukkan nama: ";
        cin >> newName;
        cout << "Masukkan alamat: ";
        cin >> newAddress;
        cout << "Masukkan nomor telepon: ";
        cin >> newPhoneNumber;

        users[numUsers].username = newUsername;
        users[numUsers].password = newPassword;
        users[numUsers].name = newName;
        users[numUsers].address = newAddress;
        users[numUsers].phoneNumber = newPhoneNumber;
        numUsers++;

        cout << "Akun berhasil dibuat. Silakan login.\n";
      } else {
        cout << "Jumlah maksimum akun telah tercapai.\n";
      }
    } else if (choice == 3) { // Keluar
      break;
    } else {
      cout << "Pilihan tidak valid. Silakan coba lagi.\n";
    }
  }

  return 0;
}
