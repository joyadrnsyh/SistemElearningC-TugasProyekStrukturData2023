#pragma once
#include "./struct.h"
#include <iostream>
using namespace std;

int lihatMenu(int a, int b) {
  menu pil;

  if (a == 0) {

    cout << "|===========================================|" << endl;
    return 0;
  } else {
 
    cout << "|" << b + 1 << ". " << pil.listMenu[b] << endl;

    b = b + 1;
  }
  return lihatMenu(a - 1, b);
  cout << "|============================================|" << endl;
}
