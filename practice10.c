#include <stdio.h>

int main() {

  /*����, ���� ������ �Է¹޾� ������
  ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�*/

  //����
  int kor, mat, eng, sum, num;
  float avg;
  char grade;

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

  /* ���ǿ����� ���
  grade = (avg >= 80) ? 'A' : 'F'; */
  if (avg >= 80) grade = 'A';
  else grade = 'B';

  //���
  printf("\n<<������>>");
  printf("\n������ %d�� �Դϴ�.", sum);
  printf("\n����� %.2f�� �Դϴ�.", avg);
  printf("\n����� %c�Դϴ�.", grade);

  return 0;
}
