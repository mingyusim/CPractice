#include <stdio.h>

int main() {
  /* 평균을 입력받아서
  90이상이면 A, 80이상이면 B, 70이상이면 C, 나머지는 F가 출력되도록
  프로그램을 작성하시오. */
  int gde;
  float avg;

  printf("평균을 입력하세요 : ");
  scanf("%f", &avg);

  /*if(avg >= 90) printf("등급은 A입니다.\n");
  else if(avg >= 80) printf("등급은 B입니다.\n");
  else if(avg >= 70) printf("등급은 C입니다.\n");
  else printf("등급은 F입니다.\n");*/

  if(avg >= 90) gde = 1;
    else if(avg >= 80) gde = 2;
    else if(avg >= 70) gde = 3;
    else gde = 4;

  switch(gde) {
    case 1:
      printf("등급은 A입니다.\n");
      break;
    case 2:
      printf("등급은 B입니다.\n");
      break;
    case 3:
      printf("등급은 C입니다.\n");
      break;
    default :
      printf("등급은 F입니다.\n");
  }

  return 0;
}
