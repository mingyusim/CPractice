#include <stdio.h>

int main() {

  /*����, ���� ������ �Է¹޾� ������
  ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�*/

  //����
  int kor, mat, eng, sum;
  float avg;

  //�Ҵ�
  printf("���� ������ �Է��ϼ��� : ");
  scanf("%d", &kor);

  printf("���� ������ �Է��ϼ��� : ");
  scanf("%d", &mat);

  printf("���� ������ �Է��ϼ��� : ");
  scanf("%d", &eng);

  //����
  sum = kor + mat + eng;
  avg = (float)sum / 3;

  //���
  printf("\n<<������>>");
  printf("\n������ %d�� �Դϴ�.", sum);
  printf("\n����� %.2f�� �Դϴ�.\n", avg);

  return 0;
}
