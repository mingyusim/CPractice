/* Example 5-1
  �Է��� ������ ������ ����ϴ� ���α׷�
  (�Լ��� ���� �̻��) */
#include <stdio.h>

int myAbs(int value) {
  int iAbs;

  if(iAbs > 0) {
    iAbs = value;
  } else {
    iAbs = -value;
  }

  return iAbs;
}

int main() {
  int iValue, iResult;

  printf("������ �Է��ϼ��� : ");
  scanf("%d", &iValue);

  iResult = myAbs(iValue);

  printf("%d�� ������ %d�Դϴ�.\n", iValue, iResult);

  return 0;
}
