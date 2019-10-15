#include<stdio.h>

int main() {
  /* ������ �Է¹޾Ƽ�
  90�̻��̸� A, 80�̻��̸� B, 70�̻��̸� C, �������� F�� ���µǵ���
  ���α׷��� �ۼ��Ͻÿ�. */
  int gde;
  float avg;

  home :
  printf("������ �Է��ϼ��� : ");
  scanf("%f", &avg);

  /* ---if������ ����---
  <<�����Թ���>>
  char grade;
  if (avg >= 90) grade = 'A';
    else if (avg >= 80) grade = 'B';
    else if (avg >= 70) grade = 'C';
    else grade = 'F';

  printf("������ %f�̰�, ������ %c�Դϴ�", avg, grade); */

  /* <<�� ����>>

  if(avg >= 90) printf("������ A�Դϴ�.\n");
  else if(avg >= 80) printf("������ B�Դϴ�.\n");
  else if(avg >= 70) printf("������ C�Դϴ�.\n");
  else printf("������ F�Դϴ�.\n");*/

  if(avg > 100) {
    warning();
    goto home;
  }

  switch((int)avg / 10) {
    case 10:
    case 9:
      printf("������ A�Դϴ�.\n");
      // grade = 'A';
      break;
    case 8:
      printf("������ B�Դϴ�.\n");
      // grade = 'B';
      break;
    case 7:
      printf("������ C�Դϴ�.\n");
      // grade = 'C';
      break;
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      printf("������ F�Դϴ�.\n");
      // grade = 'F';
      break;
    default :
      warning();
      goto home;
  }

  return 0;
}

void warning() {
  printf("\t<<Warning>>\n");
  printf("\t������ 0���� 100���̸� �����մϴ�.\n");
  printf("\t�ٽ� �Է��ϼ���.\n\n");
}
