#include <stdio.h>
#include "func.h"

int a;

/*��������
  1. �Լ� �ٱ��� ����� ����
  2. ���α׷��� ����� �� ����
  3. ���α׷��� ����� �� �Ҹ�
  4. �ʱ�ȭ���� ������ �⺻���� 0*/
int main() {
  /*��������
  1. �Լ��� ȣ��� �� ����
  2. �Լ��� ����� �� �Ҹ�
  3. �Լ��� ����� �� �Ҹ�
  4. �ʱ�ȭ���� ������ �⺻���� ���� �Ǵ� �����Ⱚ*/
  int iValue = 10;

  printf("�������� a = %d\n", a);
  printf("�������� iValue = %d\n", iValue); //10
  printf("�������� iValue = %p\n", &iValue); //10
  {
    int iValue = 20;
    printf("�������� iValue = %d\n", iValue); //20
    printf("�������� iValue �ּ� = %p\n", &iValue); //10
  }
  printf("�������� iValue = %d\n", iValue); //10
  printf("�������� iValue = %p\n", &iValue); //10

  int iValue1, iValue2, iResult;

  printf("ù ��° ���ڸ� �Է��ϼ��� : ");
  scanf("%d", &iValue1);

  iResult = myAbs(iValue1);

  printf("%d�� ������ %d�Դϴ�.\n", iValue1, iResult);

  printf("�� ��° ���ڸ� �Է��ϼ��� : ");
  scanf("%d", &iValue2);

  iResult = getMax(iValue1, iValue2);
  printf("ū ���� %d�Դϴ�.\n", iResult);

  iResult = getMin(iValue1, iValue2);
  printf("���� ���� %d�Դϴ�.\n", iResult);

  return 0;
}
