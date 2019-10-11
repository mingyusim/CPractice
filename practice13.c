#include <stdio.h>

int main() {

  int iValue;

  printf("정수를 입력하세요 : ");
  scanf("%d", &iValue);

  printf("%d는 ", iValue);
  if (iValue > 0) {
    printf("양수입니다.");
  } else if (iValue < 0) {
    printf("음수입니다.");
  } else {
    printf("양수도 음수도 아닙니다.");  //else문은 조건이 없다.
  }

  return 0;
}
