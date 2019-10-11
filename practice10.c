#include <stdio.h>

int main() {

  /*국어, 수학 점수를 입력받아 총점과
  평균을 구하는 프로그램을 작성하시오*/

  //선언
  int kor, mat, eng, sum, num;
  float avg;
  char grade;

  //할당
  printf("국어 점수를 입력하세요 : ");
  scanf("%d", &kor);

  printf("수학 점수를 입력하세요 : ");
  scanf("%d", &mat);

  printf("영어 점수를 입력하세요 : ");
  scanf("%d", &eng);

  //연산
  sum = kor + mat + eng;
  avg = (float)sum / 3;

  /* 조건연산자 사용
  grade = (avg >= 80) ? 'A' : 'F'; */
  if (avg >= 80) grade = 'A';
  else grade = 'B';

  //출력
  printf("\n<<시험결과>>");
  printf("\n총점은 %d점 입니다.", sum);
  printf("\n평균은 %.2f점 입니다.", avg);
  printf("\n등급은 %c입니다.", grade);

  return 0;
}
