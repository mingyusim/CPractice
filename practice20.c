#include <stdio.h>

int main() {
  int num = 1, num2 = 9;
  
  while(num <= 9) {
    printf("%d*%d=%d\n", 2, num, 2*num);
    num++;
  }

  printf("\n");

  while(num2 >= 1) {
    printf("%d*%d=%d\n", 2, num2, 2*num2);
    num2--;
  }
  return 0;
}
