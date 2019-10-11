#include <stdio.h>

int main() {
  /*반지름을 입력받아 원의 넓이와 둘레를 구하시오.
  반지름은 상수 변수로 선언하여 사용하시오.
  const float pi = 3.14 */

  //선언
  float rad, ext, gir;
  const float pi = 3.14;

  //할당
  printf("원의 반지름을 입력하세요 : ");
  scanf("%f", &rad);

  //연산
  ext = pi * rad * rad;
  gir = 2 * pi * rad;

  //출력
  printf("\n원의 넓이는 %.2f입니다.", ext);
  printf("\n원의 둘레는 %.2f입니다.\n", gir);

  return 0;
}
