#include <stdio.h>

int main() {
  int iValue1 = 10;
  int iValue2 = 5;
  int iResult;

  iResult = iValue1 && iValue2;   //논리 연산자
  printf("iResult = %d \n", iResult);   //0

  iResult = iValue1 & iValue2;   //비트 논리 연산자
  printf("iResult = %d \n", iResult);   //0

  iResult = iValue1 | iValue2;   //비트 논리 연산자
  printf("iResult = %d \n", iResult);

  iResult = iValue1 ^ iValue2;   //배타적 논리합
  printf("iResult = %d \n", iResult);

  return 0;
}
