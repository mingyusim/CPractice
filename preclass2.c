#include <stdio.h>

int main() {
  int iValue, iCount, iSum = 0;

  printf("���ڸ� �Է��ϼ��� : ");
  scanf("%d", &iValue);

  for(iCount = 1; iCount <= iValue; iCount = iCount + 1) {
    iSum += iCount;
  }

  printf("1���� %d������ ���� %d�Դϴ�.\n", iValue, iSum);

  return 0;
}
