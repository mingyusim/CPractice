#include <stdio.h>

int main() {
  /*�������� �Է¹޾� ���� ���̿� �ѷ��� ���Ͻÿ�.
  �������� ��� ������ �����Ͽ� ����Ͻÿ�.
  const float pi = 3.14 */

  //����
  float rad, ext, gir;
  const float pi = 3.14;

  //�Ҵ�
  printf("���� �������� �Է��ϼ��� : ");
  scanf("%f", &rad);

  //����
  ext = pi * rad * rad;
  gir = 2 * pi * rad;

  //���
  printf("\n���� ���̴� %.2f�Դϴ�.", ext);
  printf("\n���� �ѷ��� %.2f�Դϴ�.\n", gir);

  return 0;
}
