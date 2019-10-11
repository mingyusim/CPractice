#include <stdio.h>

int main() {
  // 정수를 입력받아 짝수입니다, 홀수입니다를 출력시키시오.
  int iValue;

  printf("정수를 입력하세요 : ");
  scanf("%d", &iValue);

  if(iValue % 2 == 0) printf("짝수입니다.");
    else printf("홀수입니다.");

  return 0;
}
