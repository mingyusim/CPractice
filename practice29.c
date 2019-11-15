#include <stdio.h>

int main() {
  int a;
  a = 10;

  int *pa;  // int *pa = &a (선언 및 할당)
  pa = &a;

  printf("a = %d\n", a);  //10
  printf("pa = %p\n", pa);  //&a
  printf("&a = %p\n", &a);  //&a
  printf("&pa = %p\n", &pa);  //&pa
  printf("*pa = %p\n", *pa);  //10

  *pa = 50;
  printf("a = %d\n", a);  //50

  int b = 60;
  pa = &b;
  printf("*pa = %d\n", *pa);  //60
  printf("*pa = %d\n", *(&b));  //60
  printf("*(&pa) = %p\n", *(&pa));  //b의 주소

  return 0;
}
