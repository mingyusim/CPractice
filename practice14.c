#include <stdio.h>

int main() {
  // 정수를 입력받아 짝수입니다, 홀수입니다를 출력시키시오.
  int iValue1, iValue2;

  printf("정수를 입력하세요 : ");
  scanf("%d", &iValue1);

  if(iValue1 % 2 == 0) printf("짝수입니다.\n");
    else printf("홀수입니다.\n");

  //두 수 중 큰수를 출력시키시오.
    printf("\n정수를 입력하세요 : ");
    scanf("%d", &iValue2);

  if(iValue1 > iValue2) printf("%d이(가) 더 큰 정수입니다.\n", iValue1);
    else if(iValue1 < iValue2) printf("%d이(가) 더 큰 정수입니다.\n", iValue2);
    else printf("%d와(과) %d은(는) 같은 정수입니다.\n", iValue1, iValue2);
  return 0;
}
