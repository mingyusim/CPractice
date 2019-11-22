#include <stdio.h>

int main() {
  char name[] = "happy";

  printf("%c\n", name[4]);  // y
  /*배열의 이름은 배열의 주소와 같아
  배열의 이름은 그 배열의 시작점이다. */

  printf("%s\n", name);
}
