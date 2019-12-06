#include <stdio.h>

/*1. 학번(int), 이름, 학과, 학점(float)으로 구성된 구조체를 만든다. (구조체의 이름은 myHaksa)
  2. myHaksa를 Haksa로 변경한다.
  3. Haksa형 변수 a를 선언하여 동적할당을 받는다.
  4. 값을 출력한다.*/

struct myHaksa {
  int iClass;
  char name[10];
  char iMajor[20];
  float iGrade;
};

int main() {
  int i = 0;

  typedef struct myHaksa Haksa;
  Haksa a;
  Haksa *pa;
  pa = &a;

  //ver1. 멤버로 접근하여 출력
  printf("학번을 입력하세요 : ");
  scanf("%d", &a.iClass);
  printf("이름을 입력하세요 : ");
  scanf("%s", a.name);
  printf("학과를 입력하세요 : ");
  scanf("%s", a.iMajor);
  printf("학점을 입력하세요 : ");
  scanf("%f", &a.iGrade);

  printf("\n<<입력받은 정보>>\n");
  printf("학번 : %d\n이름 : %s\n학과 : %s\n학점 : %.1f", a.iClass, a.name, a.iMajor, a.iGrade);

  //ver2. 포인터에 의한 간접참조연산자에 의해 출력
  printf("\n<<입력받은 정보>>\n");
  printf("학번 : %d\n이름 : %s\n학과 : %s\n학점 : %.1f", pa -> iClass, pa -> name, pa -> iMajor, pa -> iGrade);

  //ver2. 포인터에 의한 역참조연산자에 의해 출력
  printf("\n<<입력받은 정보>>\n");
  printf("학번 : %d\n이름 : %s\n학과 : %s\n학점 : %.1f", (*pa).iClass, (*pa).name, (*pa).iMajor, (*pa).iGrade);


  return 0;
}
