#include <stdio.h>

int main() {

  int iValue;

  printf("������ �Է��ϼ��� : ");
  scanf("%d", &iValue);

  printf("%d�� ", iValue);
  if (iValue > 0) {
    printf("����Դϴ�.");
  } else if (iValue < 0) {
    printf("�����Դϴ�.");
  } else {
    printf("����� ������ �ƴմϴ�.");  //else���� ������ ����.
  }

  return 0;
}
