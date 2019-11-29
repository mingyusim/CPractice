#include <stdio.h>

void MyAdd(int *piValue1, int *piValue2);

int main() {
  int num1 = 10, num2 =20;

  MyAdd(&num1, &num2);
  printf("num1 = %d, num2 = %d \n", num1, num2);

  return 0;
}

void MyAdd(int *piValue1, int *piValue2) {
  int iTemp;

  iTemp = *piValue1;
  *piValue1 = *piValue2;
  *piValue2 = iTemp;
}
