#include <stdio.h>

int main() {
  // ������ �Է¹޾� ¦���Դϴ�, Ȧ���Դϴٸ� ��½�Ű�ÿ�.
  int iValue1, iValue2;

  printf("������ �Է��ϼ��� : ");
  scanf("%d", &iValue1);

  if(iValue1 % 2 == 0) printf("¦���Դϴ�.\n");
    else printf("Ȧ���Դϴ�.\n");

  //�� �� �� ū���� ��½�Ű�ÿ�.
    printf("\n������ �Է��ϼ��� : ");
    scanf("%d", &iValue2);

  if(iValue1 > iValue2) printf("%d��(��) �� ū �����Դϴ�.\n", iValue1);
    else if(iValue1 < iValue2) printf("%d��(��) �� ū �����Դϴ�.\n", iValue2);
    else printf("%d��(��) %d��(��) ���� �����Դϴ�.\n", iValue1, iValue2);
  return 0;
}
