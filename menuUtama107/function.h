#pragma once
#include "./struct.h"
#include <iostream>
using namespace std;

void printBorder() {
  cout << "|===========================================|" << endl;
}

int lihatMenu(int a, int b) {
  menu pil;

  if (a == 0) {
    printBorder();
    return 0;
  } else {
    cout << "|" << b + 1 << ". " << pil.listMenu[b] << endl;
    b = b + 1;
  }

  return lihatMenu(a - 1, b);
}
