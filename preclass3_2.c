/* Example 5-1
  �Է��� ������ ������ ����ϴ� ���α׷�
  (�Լ��� ���� �̻��) */
#include <stdio.h>

int myAbs(int value);

int main() {
  int iValue, iResult;

  printf("������ �Է��ϼ��� : ");
  scanf("%d", &iValue);

  iResult = myAbs(iValue);

  printf("%d�� ������ %d�Դϴ�.\n", iValue, iResult);

  return 0;
}

int myAbs(int value) {
  int iAbs;

  if (value > 0) {
    iAbs = value;
  } else {
    iAbs = -value;
  }

  return iAbs;
}
