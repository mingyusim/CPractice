#include <stdio.h>

// 2�ܰ� : ����Ÿ�� X, �Ű����� O
void myStar(int Strcnt);
void myDollar(int Dolcnt);
void myGugudan(int Gucnt);
void myRegugudan(int Regucnt);
void myAbs(int num);
void getMax(int num, int num2);
void getSum(int num, int num2);

void main() {
  int count, number, number2;

  printf("���ϴ� ���ڸ� �Է��ϼ��� : ");
  scanf("%d", &count);

  myStar(count);
  myDollar(count);
  myGugudan(count);
  myRegugudan(count);

  // 2�ܰ� ���� : ����Ÿ�� X, �Ű����� O
  printf("ù��° ���ڸ� �Է��ϼ��� : ");
  scanf("%d", &number);
  myAbs(number);    // �Լ��� ȣ��

  // �� ������ ū ���� ����ϴ� ���α׷�
  printf("�ι�° ���ڸ� �Է��ϼ��� : ");
  scanf("%d", &number2);
  getMax(number, number2);
  getSum(number, number2);

}

void myStar(int Strcnt) {

  for (int i = 0; i < Strcnt; i++) {
    printf(" * ");
  }
  printf("\n");
}

void myDollar(int Dolcnt) {

  for (int i = 0; i < Dolcnt; i++) {
    printf(" $ ");
  }
  printf("\n");
}

void myGugudan(int Gucnt) {

  for (int i = 1; i <= 9; i++) {
    printf("%d * %d = %d\n", Gucnt, i, Gucnt * i);
  }
}

void myRegugudan(int Regucnt) {

  for (int i = 9; i >= 1; i--) {
    printf("%d * %d = %d\n", Regucnt, i, Regucnt * i);
  }
}

void myAbs(int num) {
  int result;

  if(num > 0) {
    result = num;
  } else {
    result = -num;
  }
  printf("%d�� ������ %d�Դϴ�.\n", num, result);
}

void getMax(int num, int num2) {
  int result;

  if(num > num2) {
    result = num;
  } else if (num < num2) {
    result = num2;
  } else {
    printf("�� ���ڴ� �����ϴ�.\n");
  }

  printf("�� ������ %d��(��) �� Ů�ϴ�.\n", result);
}

void getSum(int num, int num2) {
  int result;

  result = num + num2;

  printf("�� ������ ���� %d�Դϴ�.\n", result);
}
