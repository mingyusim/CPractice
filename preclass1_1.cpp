#include <stdio.h>

int main() {
  int iValue = 5, iResult;

  iResult = iValue++ - 1;
  printf("iValue = %d, iResult = %d\n", iValue , iResult);
  iResult = ++iValue + 2;
  printf("iValue = %d, iResult = %d\n", iValue , iResult);

  iResult = iValue-- - 3;
  printf("iValue = %d, iResult = %d\n", iValue , iResult);
  iResult = --iValue + 4;
  printf("iValue = %d, iResult = %d\n", iValue , iResult);

  return 0;
}
