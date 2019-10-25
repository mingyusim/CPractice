#include <stdio.h>

int myAbs(int num);
int myMod(int a);
int getMax(int num1, int num2);
int getSum(int num1, int num2);

// 3단계 응용 : 리턴타입 O, 매개변수 O
void main() {
  int number, re1, re2;
  int number2, re3, re4;

  printf("숫자를 입력하세요 : ");
  scanf("%d", &number);
  printf("\n");

  re1 = myAbs(number);
  printf("*****************\n");
  printf("절댓값은 %d입니다.\n", re1);
  printf("=================\n");

  re2 = myMod(number);  // 10으로 나눈 나머지를 구하는 함수
  printf("*****************\n");
  printf("10으로 나눈 나머지는 %d입니다.\n", re2);
  printf("=================\n\n");

  printf("숫자를 한개 더 입력하세요 : ");
  scanf("%d", &number2);

  re3 = getMax(number, number2);
  printf("%d와 %d중 큰 수는 %d입니다.\n", number, number2, re3);

  re4 = getSum(number, number2);
  printf("두 수의 합은 %d입니다.\n", re4);
}

int myAbs(int num) {
  int result;

  if(num > 0) {
    result = num;
  } else {
    result = -num;
  }
  return result;  // 리턴값(반환값)
}

int myMod(int a) {
  return (a % 10);
}

int getMax(int num1, int num2) {
  int result;

  if(num1 > num2) {
    result = num1;
  } else result = num2;

  return result;
}

int getSum(int num1, int num2) {
  return (num1 + num2);
}
