#include <iostream>
#include <string>
using namespace std;

struct fakultas {
  string pilFak[3] = {"Fakultas Teknologi Industri", "Fakultas Agama Islam",
                      "Fakultas Hukum"};
};

int selFac(int a, int b) {
  fakultas pil;
  if (a == 0) {
    return 0;
  } else {
    cout << "|==============================|" << endl;
    cout << "|        PILIH FAKULTAS        |" << endl;
    cout << "|==============================|" << endl;
    cout << b + 1 << ". " << pil.pilFak[b] << endl;
    b = b + 1;
  }
  return selFac(a - 1, b);
}