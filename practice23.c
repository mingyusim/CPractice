#include <stdio.h>

// 2단계 : 리턴타입 X, 매개변수 O
void myStar(int Strcnt);
void myDollar(int Dolcnt);
void myGugudan(int Gucnt);
void myRegugudan(int Regucnt);
void myAbs(int num);
void getMax(int num, int num2);
void getSum(int num, int num2);

void main() {
  int count, number, number2;

  printf("원하는 숫자를 입력하세요 : ");
  scanf("%d", &count);

  myStar(count);
  myDollar(count);
  myGugudan(count);
  myRegugudan(count);

  // 2단계 응용 : 리턴타입 X, 매개변수 O
  printf("첫번째 숫자를 입력하세요 : ");
  scanf("%d", &number);
  myAbs(number);    // 함수의 호출

  // 두 숫자중 큰 수를 출력하는 프로그램
  printf("두번째 숫자를 입력하세요 : ");
  scanf("%d", &number2);
  getMax(number, number2);
  getSum(number, number2);

}

void myStar(int Strcnt) {

  for (int i = 0; i < Strcnt; i++) {
    printf(" * ");
  }
  printf("\n");
}

void myDollar(int Dolcnt) {

  for (int i = 0; i < Dolcnt; i++) {
    printf(" $ ");
  }
  printf("\n");
}

void myGugudan(int Gucnt) {

  for (int i = 1; i <= 9; i++) {
    printf("%d * %d = %d\n", Gucnt, i, Gucnt * i);
  }
}

void myRegugudan(int Regucnt) {

  for (int i = 9; i >= 1; i--) {
    printf("%d * %d = %d\n", Regucnt, i, Regucnt * i);
  }
}

void myAbs(int num) {
  int result;

  if(num > 0) {
    result = num;
  } else {
    result = -num;
  }
  printf("%d의 절댓값은 %d입니다.\n", num, result);
}

void getMax(int num, int num2) {
  int result;

  if(num > num2) {
    result = num;
  } else if (num < num2) {
    result = num2;
  } else {
    printf("두 숫자는 같습니다.\n");
  }

  printf("두 숫자중 %d이(가) 더 큽니다.\n", result);
}

void getSum(int num, int num2) {
  int result;

  result = num + num2;

  printf("두 숫자의 합은 %d입니다.\n", result);
}
