#include <stdio.h>

int main() {
  /* 하나의 정수를 입력받아
  양수이면 '+', 음수이면 '-'를 출력하시오.
  조건 연산자를 사용하시오 */

  //선언
  int i;

  //할당
  printf("<<양수 음수 판별기>>\n");
  printf("판별할 정수를 입력하세요 : ");
  scanf("%d", &i);

  //연산 및 출력
  if(i >= 0) printf("양수입니다.");
    else  printf("음수입니다");

  return 0;
}
