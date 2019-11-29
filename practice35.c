#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* myresult(float a);

int main() {
  //이름, 국어, 수학 점수를  입력받아 합격 & 불합격 출력
  char result[30];
  char name[20];
  char *presult = NULL;
  char grade;
  int kor, math;
  float avg;

  printf("이름, 국어점수, 수학점수를 입력하세요 : ");
  scanf("%s %d %d", name, &kor, &math);

  avg = (kor + math) / 2.0;
  strcpy(result, myresult(avg));
  printf("%s은(는) \" %s \" 입니다\n", name, result);

  return 0;
}

char* myresult(float a) {
  char result[10];

  if(a >= 90) strcpy(result, "합격");
  else strcpy(result, "불합격");

  return result;
}
