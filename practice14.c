#include <stdio.h>

int main() {
  // ������ �Է¹޾� ¦���Դϴ�, Ȧ���Դϴٸ� ��½�Ű�ÿ�.
  int iValue;

  printf("������ �Է��ϼ��� : ");
  scanf("%d", &iValue);

  if(iValue % 2 == 0) printf("¦���Դϴ�.");
    else printf("Ȧ���Դϴ�.");

  return 0;
}
