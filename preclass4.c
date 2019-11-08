#include <stdio.h>

int main() {
  int iValue = 10;

  {
    printf("[in block 1] iValue = %d\n", iValue);

    int iValue;
    iValue = 20;

    printf("[in block 2] iValue = %d\n", iValue);
  }

  printf("[out block] iValue = %d\n", iValue);

  return 0;
}
