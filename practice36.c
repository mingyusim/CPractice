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
  /*����, int student
  struct score student;*/

  /*���� �Ҵ�
  a.name[20] = "ȫ�浿"; (x)*/
  /*strcpy(student.name, "Kim");
  student.iMath = 90;
  student.iEng = 80;
  student.iKor = 70;*/

  /*����ü �迭�� �̿��� ���α׷�*/
  //��� 1
  struct score student[5];

  /*��� 2 : structure score��� ����ü �̸��� myScore�� �����Ͽ� ����Ѵ�
  typedef struct score myScore;
  myScore a[5];*/

  /*���� �Ҵ�
  &student.name�� �ּҸ� �Ѱ��ִ� ���̶� �����Ұ� = �迭�� �̸� ��ü�� �ּҴ� !*/
  int i = 0;

  while(i<5) {
    printf("�̸��� �Է��ϼ��� : ");
    scanf("%s", student[i].name);
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &student[i].iMath);
    printf("��� �Է��ϼ��� : ");
    scanf("%d", &student[i].iEng);
    printf("��� �Է��ϼ��� : ");
    scanf("%d", &student[i].iKor);

    //����
    student[i].fAverage = (float)(student[i].iMath + student[i].iEng + student[i].iKor) / 3;

    printf("%s���� ����� %.2f�Դϴ�.\n", student[i].name, student[i].fAverage);

    i++;
  }

  /*���
  printf("Name = %s\n", student.name);
  printf("Math = %d\n", student.iMath);
  printf("English = %d\n", student.iEng);
  printf("Korean = %d\n", student.iKor);
  printf("Average = %.2f\n", student.fAverage);*/

  return 0;
}
