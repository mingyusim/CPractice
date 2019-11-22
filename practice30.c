#include <stdio.h>

int main() {
  void *pAny;
  int iValue = 10;
  float fValue = 1.23f;
  char cValue = 'A';

  pAny = &iValue;
  printf("*pAny = %d\n", *(int *)pAny);

  pAny = &fValue;
  printf("*pAny = %.2f\n", *(float *)pAny);

  pAny = &cValue;
  printf("*pAny = %c\n", *(char *)pAny);

  return 0;
}
