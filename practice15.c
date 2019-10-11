#include <stdio.h>

int main() {
  /*정수를 입력받아 큰 수를 출력시키시오
  두 수는 모두 양수이어야 한다. */
  int iValue1, iValue2;

  printf("첫 번째 정수를 입력하세요 : ");
  scanf("%d", &iValue1);
  printf("두 번째 정수를 입력하세요 : ");
  scanf("%d", &iValue2);

  if(iValue1 > 0 && iValue2 > 0) {
    if(iValue1 > iValue2) printf("%d이(가) 더 큰 정수입니다.\n", iValue1);
      else if(iValue1 < iValue2) printf("%d이(가) 더 큰 정수입니다.\n", iValue2);
      else printf("%d와(과) %d은(는) 같은 정수입니다.\n", iValue1, iValue2);
  } else printf("두 수 모두 0보다 커야 합니다.\n");

  return 0;
}
