#include <stdio.h>

int main() {
  /* �ϳ��� ������ �Է¹޾�
  ����̸� '+', �����̸� '-'�� ����Ͻÿ�.
  ���� �����ڸ� ����Ͻÿ� */

  //����
  int i, num;
  char rst;

  //�Ҵ�
  printf("<<��� ���� �Ǻ���>>\n");
  printf("�Ǻ��� ������ �Է��ϼ��� : ");
  scanf("%d", &i);

  //���� �� ���
  /* if(i >= 0) printf("����Դϴ�.");
     else  printf("�����Դϴ�");
  i >= 0 ? printf("����Դϴ�.") : printf("�����Դϴ�."); */

  //������ ���
  rst = (i >= 0) ? '+' : '-';

  printf("%d�� %c�Դϴ�.\n", i, rst);

  return 0;
}