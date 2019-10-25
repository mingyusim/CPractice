/* Example 5-1
  입력한 숫자의 절댓값을 출력하는 프로그램
  (함수의 선언 미사용) */
#include <stdio.h>

int myAbs(int value) {
  int iAbs;

  if(iAbs > 0) {
    iAbs = value;
  } else {
    iAbs = -value;
  }

  return iAbs;
}

int main() {
  int iValue, iResult;

  printf("정수를 입력하세요 : ");
  scanf("%d", &iValue);

  iResult = myAbs(iValue);

  printf("%d의 절댓값은 %d입니다.\n", iValue, iResult);

  return 0;
}
