#include <stdio.h>

int mySum(int k, int m, int e);
float myAvg(int t);
char myGrade(float g);

int main() {
  // 세 개의 숫자를 입력받아 총점과 평균, 등급을 구하는 프로그램
  int kor, math, eng, tot;
  float avg;
  char grade;

  printf("<세 과목의 점수를 입력하세요>\n");
  printf("국어 : ");
  scanf("%d", &kor);
  printf("수학 : ");
  scanf("%d", &math);
  printf("영어 : ");
  scanf("%d", &eng);

  tot = mySum(kor, math, eng);
  avg = myAvg(tot);
  grade = myGrade(avg);

  // tot, avg, grade 출력
  printf("성적의 합계는 %d점 입니다.\n", tot);
  printf("성적의 평균은 %.2f점 입니다.\n", avg);
  printf("성적은 %c입니다.", grade);
}

int mySum(int k, int m, int e) {
  int result;
  result = k + m + e;

  return result;
}

float myAvg(int t) {
  float result;
  result = t/(float)3;

  return result;
}

char myGrade(float g) {
  char div;

  switch((int)g / 10) {
    case 10:
    case 9:
      div = 'A';
      break;
    case 8:
      div = 'B';
      break;
    case 7:
      div = 'C';
      break;
    case 6:
      div = 'D';
      break;
    default :
      div = 'F';
      break;
  }

  return div;
}
