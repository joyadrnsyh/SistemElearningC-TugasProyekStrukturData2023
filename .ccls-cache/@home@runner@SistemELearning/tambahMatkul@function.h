#pragma once
#include "../tambahMatkul/struct.h"
#include <iostream>

int menuKu(int a, int b) {
  setMenuKuliah pil;
  if (a == 0) {
    return 0;
  } else {
    cout << b + 1 << ". " << pil.setMenu[b] << endl;
    b = b + 1;
  }
  return menuKu(a - 1, b);
};