#include <stdio.h>

int main() {
//국어, 수학점수를 입력하여 합계를 출력한다.
//선언
int kor, math, eng, tot;
float avg;

//scanf 연습
int sci, hist;

while(1) {
    printf("과학 점수를 입력하세요 : ")
    scanf("%d", &sci);  //콘솔로부터 값을 입력받음
    printf("\n역사 점수를 입력하세요 : ")
    scanf("%d", &hist);

    tot1 = sci + hist;
    avg1 = tot1 / 2.0;

    printf("\n수학과 역사의 합계는 %d입니다.\n", tot1);
    printf("수학과 역사의 평균은 %.1f입니다.\n", avg1);

    //할당
    kor = 90;
    math = 95;
    eng = 90;

    //연산
    tot2 = kor + math + eng;
    avg2 = (float)tot / 3;

    //출력
    printf("국어 수학 영어의 합계는 %d입니다.\n", tot2);
    printf("국어 수학 영어의평균은 %.1f입니다.\n", avg2);

    break;
  }

  return 0;
}
