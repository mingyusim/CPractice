/* �� ������ ���蹮���� �ݵ�� ���´�!.
Continue�� ���蹮���� �ݵ�� ���Ŵ�!*/
#include <stdio.h>

int main() {
  int dan, iCount = 1; // ���ǹ�, �ʱⰪ �����ؾߵ�

  printf("���� �Է��ϼ��� : ");
  scanf("%d", &dan);

  while(iCount <= 9) {
    if (iCount == 5) {
      iCount ++;  // �� �������� ���� ������ ������ 4���� ����
      continue;
    }
    printf("%d * %d = %d\n", dan, iCount, dan*iCount);
    iCount ++;
  }

  /*for (int i = 1; i <= 9; i++) {
    if (i == 5) {
      // break;
      continue; // �Ʒ��� pass�ϰ� ���� �߰�������
    }
    printf("%d * %d = %d\n", dan, i, dan*i);
  }*/
  printf("�ݺ����� ������ϴ�.\n");

  return 0;
}
