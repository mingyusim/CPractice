#include<stdio.h>

int main() {
  /* 평균점수를 입력받아
  90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 그 외의 점수면 F 등급을 부여하는 프로그램을 만드세요.
  if문과 switch case문을 사용하여 두 가지 방법으로 만들어 보세요. */
  int gde;
  float avg;

  home :
  printf("평균점수를 입력해주세요 : ");
  scanf("%f", &avg);

  /* ---if문을 사용해서 표현하는 방법---
  <<교수님 방법>>
  char grade;
  if (avg >= 90) grade = 'A';
    else if (avg >= 80) grade = 'B';
    else if (avg >= 70) grade = 'C';
    else grade = 'F';

  printf("평균은 %f점 입니다, 학점은 %c입니다", avg, grade); */

  /* <<내 방법>>

  if(avg >= 90) printf("A학점입니다.\n");
  else if(avg >= 80) printf("B학점입니다.\n");
  else if(avg >= 70) printf("C학점입니다.\n");
  else printf("F학점입니다.\n");*/

  if(avg > 100) {
    warning();
    goto home;
  }

  switch((int)avg / 10) {
    case 10:
    case 9:
      printf("A학점입니다.\n");
      // grade = 'A';
      break;
    case 8:
      printf("B학점입니다.\n");
      // grade = 'B';
      break;
    case 7:
      printf("C학점입니다.\n");
      // grade = 'C';
      break;
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      printf("F학점입니다.\n");
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
  printf("\t평균점수는 0점에서 100점 사이의 값이여야 합니다.\n");
  printf("\t평균점수를 다시 입력해주세요.\n\n");
}
