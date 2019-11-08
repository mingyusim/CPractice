#include <stdio.h>

int myAbs(int value1) {
  int iAbs;

  if(value1 > 0) {
    iAbs = value1;
  } else {
    iAbs = -value1;
  }

  return iAbs;
}
