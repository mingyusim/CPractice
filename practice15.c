#include <stdio.h>

int main() {
  /*������ �Է¹޾� ū ���� ��½�Ű�ÿ�
  �� ���� ��� ����̾�� �Ѵ�. */
  int iValue1, iValue2;

  printf("ù ��° ������ �Է��ϼ��� : ");
  scanf("%d", &iValue1);
  printf("�� ��° ������ �Է��ϼ��� : ");
  scanf("%d", &iValue2);

  if(iValue1 > 0 && iValue2 > 0) {
    if(iValue1 > iValue2) printf("%d��(��) �� ū �����Դϴ�.\n", iValue1);
      else if(iValue1 < iValue2) printf("%d��(��) �� ū �����Դϴ�.\n", iValue2);
      else printf("%d��(��) %d��(��) ���� �����Դϴ�.\n", iValue1, iValue2);
  } else printf("�� �� ��� 0���� Ŀ�� �մϴ�.\n");

  return 0;
}
