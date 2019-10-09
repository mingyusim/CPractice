#include <stdio.h>

int main() {
  int iValue;

  printf("정수를 입력하세요 : ");
  scanf("%d", &iValue);

  if (iValue > 0) {
    printf("%d는 양수입니다\n", iValue);
  }

  return 0;
}
