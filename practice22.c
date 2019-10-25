#include <stdio.h>

void myStar();
void mySharp();
void myDollar();

// 1단계  리턴타입 X, 매개변수 X
void main(void) { // void : 없다.
  int i;

  myStar();
  mySharp();
  myDollar();
}

void myStar() { // 함수의 정의
  for (int i = 0; i < 6; i++) {
    printf(" * ");
  }
  printf("\n");
}

void mySharp() { // 함수의 정의
  for (int i = 0; i < 6; i++) {
    printf(" # ");
  }
  printf("\n");
}

void myDollar() { // 함수의 정의
  for (int i = 0; i < 6; i++) {
    printf(" $ ");
  }
  printf("\n");
}
