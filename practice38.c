#include <stdio.h>

/*1. �й�(int), �̸�, �а�, ����(float)���� ������ ����ü�� �����. (����ü�� �̸��� myHaksa)
  2. myHaksa�� Haksa�� �����Ѵ�.
  3. Haksa�� ���� a�� �����Ͽ� �����Ҵ��� �޴´�.
  4. ���� ����Ѵ�.*/

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

  //ver1. ����� �����Ͽ� ���
  printf("�й��� �Է��ϼ��� : ");
  scanf("%d", &a.iClass);
  printf("�̸��� �Է��ϼ��� : ");
  scanf("%s", a.name);
  printf("�а��� �Է��ϼ��� : ");
  scanf("%s", a.iMajor);
  printf("������ �Է��ϼ��� : ");
  scanf("%f", &a.iGrade);

  printf("\n<<�Է¹��� ����>>\n");
  printf("�й� : %d\n�̸� : %s\n�а� : %s\n���� : %.1f", a.iClass, a.name, a.iMajor, a.iGrade);

  //ver2. �����Ϳ� ���� �������������ڿ� ���� ���
  printf("\n<<�Է¹��� ����>>\n");
  printf("�й� : %d\n�̸� : %s\n�а� : %s\n���� : %.1f", pa -> iClass, pa -> name, pa -> iMajor, pa -> iGrade);

  //ver2. �����Ϳ� ���� �����������ڿ� ���� ���
  printf("\n<<�Է¹��� ����>>\n");
  printf("�й� : %d\n�̸� : %s\n�а� : %s\n���� : %.1f", (*pa).iClass, (*pa).name, (*pa).iMajor, (*pa).iGrade);


  return 0;
}
