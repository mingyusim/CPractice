#include <stdio.h>

int main() {
  /* ����� �Է¹޾Ƽ�
  90�̻��̸� A, 80�̻��̸� B, 70�̻��̸� C, �������� F�� ��µǵ���
  ���α׷��� �ۼ��Ͻÿ�. */
  int gde;
  float avg;

  printf("����� �Է��ϼ��� : ");
  scanf("%f", &avg);

  /*if(avg >= 90) printf("����� A�Դϴ�.\n");
  else if(avg >= 80) printf("����� B�Դϴ�.\n");
  else if(avg >= 70) printf("����� C�Դϴ�.\n");
  else printf("����� F�Դϴ�.\n");*/

  if(avg >= 90) gde = 1;
    else if(avg >= 80) gde = 2;
    else if(avg >= 70) gde = 3;
    else gde = 4;

  switch(gde) {
    case 1:
      printf("����� A�Դϴ�.\n");
      break;
    case 2:
      printf("����� B�Դϴ�.\n");
      break;
    case 3:
      printf("����� C�Դϴ�.\n");
      break;
    default :
      printf("����� F�Դϴ�.\n");
  }

  return 0;
}
