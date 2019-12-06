#include <stdio.h>
#include <string.h>

struct score {
  char name[10];
  int iMath;
  int iEng;
  int iKor;
  float fAverage;
};

int main() {
  /*선언, int student
  struct score student;*/

  /*정적 할당
  a.name[20] = "홍길동"; (x)*/
  /*strcpy(student.name, "Kim");
  student.iMath = 90;
  student.iEng = 80;
  student.iKor = 70;*/

  /*구조체 배열을 이용한 프로그램*/
  //방법 1
  struct score student[5];

  /*방법 2 : structure score라는 구조체 이름을 myScore로 변경하여 사용한다
  typedef struct score myScore;
  myScore a[5];*/

  /*동적 할당
  &student.name은 주소를 넘겨주는 아이라 주의할것 = 배열의 이름 자체가 주소다 !*/
  int i = 0;

  while(i<5) {
    printf("이름을 입력하세요 : ");
    scanf("%s", student[i].name);
    printf("수학을 입력하세요 : ");
    scanf("%d", &student[i].iMath);
    printf("영어를 입력하세요 : ");
    scanf("%d", &student[i].iEng);
    printf("국어를 입력하세요 : ");
    scanf("%d", &student[i].iKor);

    //연산
    student[i].fAverage = (float)(student[i].iMath + student[i].iEng + student[i].iKor) / 3;

    printf("%s님의 평균은 %.2f입니다.\n", student[i].name, student[i].fAverage);

    i++;
  }

  /*출력
  printf("Name = %s\n", student.name);
  printf("Math = %d\n", student.iMath);
  printf("English = %d\n", student.iEng);
  printf("Korean = %d\n", student.iKor);
  printf("Average = %.2f\n", student.fAverage);*/

  return 0;
}
