#include <stdio.h>
// #include <stdlib.h>
// #include _CRT_SECURE_NO_WARNINGS

int main() {

  float FValue = 1.234567890123456789F;
  double dValue = 1.234567890123456789;
  long double IdValue = 1.23456789123456789L;

  printf("%f\n", fValue);
  printf("%.18f\n", fValue);
  printf("%.18lf\n", dValue);
  printf("%.18f\n", IdValue);

  return 0;

}
