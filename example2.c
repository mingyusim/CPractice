#include <stdio.h>

int main() {
  extern int giValue  //전역변수 빌려옴
  printf("giValue = %d\n", giValue);  //10

  return 0;
}

int giValue = 10;
