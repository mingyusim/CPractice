/* Example 4-21
  while������ continue�� ��� �� ���� ���� */
#include <stdio.h>

int main() {
  int iValue, iCount;

  printf("���ڸ� �Է��ϼ��� : ");
  scanf("%d", &iValue);

  iCount = 1;
  while (iCount <= 9) {
    if (iCount == 5) {
      iCount++;
      continue;
    }
    printf("%d * %d = %d\n", iValue, iCount, iValue * iCount);
    iCount++;
  }
  return 0;
}
