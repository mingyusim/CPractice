#include <stdio.h>

int main() {
  /*키와 몸무게를 입력받아서  BMI값을 출력하는 프로그램
  BMI 계산법 = 몸무게 / (키(m)*키(m))*/
  //선언
  float hei, wei;

  //할당
  printf("키(cm) : ");
  scanf("%1f". &hei);
  printf("\n몸무게(kg) : ")
  scanf("%1f", &wei);

  //연산
  float BMI = (wei / ((hei/100)*(hei/100));

  //출력
  printf("\nBMI는 : %1f 입니다.", BMI);

  /*원의 반지름을 입력받아 원의 넓이와 둘레를 구하시오
  pi = 3.14로 상수변수로 선언하여 사용하시오.*/
  const float pi = 3.14;
  float r;

  printf("원의 반지름을 입력하세요(cm) : ");
  scanf("%f", &r);

  float round = (2 * pi * r);
  float extent = (pi *r * r);

  printf("\n원의 반지름은 : %2f(cm) 입니다.\n", round);
  printf("원의 넓이는 : %2f(cm)^2 입니다.\n", extnet);

  const float pi =3.14f;  //변수상수

  printf("원주율의 값은 %f \n", pi);

  pi = 3.33;

  printf("원주율의 값은 %f \n", pi);

  return 0;
}
