#include <stdio.h>

int myAbs(int num);
int myMod(int a);
int getMax(int num1, int num2);
int getSum(int num1, int num2);

// 3�ܰ� ���� : ����Ÿ�� O, �Ű����� O
void main() {
  int number, re1, re2;
  int number2, re3, re4;

  printf("���ڸ� �Է��ϼ��� : ");
  scanf("%d", &number);
  printf("\n");

  re1 = myAbs(number);
  printf("*****************\n");
  printf("������ %d�Դϴ�.\n", re1);
  printf("=================\n");

  re2 = myMod(number);  // 10���� ���� �������� ���ϴ� �Լ�
  printf("*****************\n");
  printf("10���� ���� �������� %d�Դϴ�.\n", re2);
  printf("=================\n\n");

  printf("���ڸ� �Ѱ� �� �Է��ϼ��� : ");
  scanf("%d", &number2);

  re3 = getMax(number, number2);
  printf("%d�� %d�� ū ���� %d�Դϴ�.\n", number, number2, re3);

  re4 = getSum(number, number2);
  printf("�� ���� ���� %d�Դϴ�.\n", re4);
}

int myAbs(int num) {
  int result;

  if(num > 0) {
    result = num;
  } else {
    result = -num;
  }
  return result;  // ���ϰ�(��ȯ��)
}

int myMod(int a) {
  return (a % 10);
}

int getMax(int num1, int num2) {
  int result;

  if(num1 > num2) {
    result = num1;
  } else result = num2;

  return result;
}

int getSum(int num1, int num2) {
  return (num1 + num2);
}
