#include <stdio.h>
#include "func.h"

int a;

/*전역변수
  1. 함수 바깥에 선언된 변수
  2. 프로그램이 실행될 때 생성
  3. 프로그램이 종료될 때 소멸
  4. 초기화되지 않으면 기본값이 0*/
int main() {
  /*지역변수
  1. 함수가 호출될 때 생성
  2. 함수가 종료될 때 소멸
  3. 함수가 종료될 때 소멸
  4. 초기화하지 않으면 기본값이 에러 또는 쓰레기값*/
  int iValue = 10;

  printf("전역변수 a = %d\n", a);
  printf("지역변수 iValue = %d\n", iValue); //10
  printf("지역변수 iValue = %p\n", &iValue); //10
  {
    int iValue = 20;
    printf("지역변수 iValue = %d\n", iValue); //20
    printf("지역변수 iValue 주소 = %p\n", &iValue); //10
  }
  printf("지역변수 iValue = %d\n", iValue); //10
  printf("지역변수 iValue = %p\n", &iValue); //10

  int iValue1, iValue2, iResult;

  printf("첫 번째 숫자를 입력하세요 : ");
  scanf("%d", &iValue1);

  iResult = myAbs(iValue1);

  printf("%d의 절댓값은 %d입니다.\n", iValue1, iResult);

  printf("두 번째 숫자를 입력하세요 : ");
  scanf("%d", &iValue2);

  iResult = getMax(iValue1, iValue2);
  printf("큰 수는 %d입니다.\n", iResult);

  iResult = getMin(iValue1, iValue2);
  printf("작은 수는 %d입니다.\n", iResult);

  return 0;
}
