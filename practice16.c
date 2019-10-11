#include <stdio.h>

int main() {
  /* 평균을 입력받아서
  90이상이면 A, 80이상이면 B, 70이상이면 C, 나머지는 F가 출력되도록
  프로그램을 작성하시오. */
  int gde;
  float avg;

  home :
  printf("평균을 입력하세요 : ");
  scanf("%f", &avg);

  /* ---if문으로 구현---
  <<교수님방식>>
  char grade;
  if (avg >= 90) grade = 'A';
    else if (avg >= 80) grade = 'B';
    else if (avg >= 70) grade = 'C';
    else grade = 'F';

  printf("평균은 %f이고, 등급은 %c입니다", avg, grade); */

  /* <<내 방식>>

  if(avg >= 90) printf("등급은 A입니다.\n");
  else if(avg >= 80) printf("등급은 B입니다.\n");
  else if(avg >= 70) printf("등급은 C입니다.\n");
  else printf("등급은 F입니다.\n");*/

  if(avg > 100) {
    warning();
    goto home;
  }

  switch((int)avg / 10) {
    case 10:
    case 9:
      printf("등급은 A입니다.\n");
      // grade = 'A';
      break;
    case 8:
      printf("등급은 B입니다.\n");
      // grade = 'B';
      break;
    case 7:
      printf("등급은 C입니다.\n");
      // grade = 'C';
      break;
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      printf("등급은 F입니다.\n");
      // grade = 'F';
      break;
    default :
      warning();
      goto home;
  }

  return 0;
}

void warning() {
  printf("\t<<Warning>>\n");
  printf("\t평균은 0에서 100사이만 가능합니다.\n");
  printf("\t다시 입력하세요.\n\n");
}
