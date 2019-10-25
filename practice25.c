#include <stdio.h>

int mySum(int k, int m, int e);
float myAvg(int t);
char myGrade(float g);

int main() {
  // �� ���� ���ڸ� �Է¹޾� ������ ���, ����� ���ϴ� ���α׷�
  int kor, math, eng, tot;
  float avg;
  char grade;

  printf("<�� ������ ������ �Է��ϼ���>\n");
  printf("���� : ");
  scanf("%d", &kor);
  printf("���� : ");
  scanf("%d", &math);
  printf("���� : ");
  scanf("%d", &eng);

  tot = mySum(kor, math, eng);
  avg = myAvg(tot);
  grade = myGrade(avg);

  // tot, avg, grade ���
  printf("������ �հ�� %d�� �Դϴ�.\n", tot);
  printf("������ ����� %.2f�� �Դϴ�.\n", avg);
  printf("������ %c�Դϴ�.", grade);
}

int mySum(int k, int m, int e) {
  int result;
  result = k + m + e;

  return result;
}

float myAvg(int t) {
  float result;
  result = t/(float)3;

  return result;
}

char myGrade(float g) {
  char div;

  switch((int)g / 10) {
    case 10:
    case 9:
      div = 'A';
      break;
    case 8:
      div = 'B';
      break;
    case 7:
      div = 'C';
      break;
    case 6:
      div = 'D';
      break;
    default :
      div = 'F';
      break;
  }

  return div;
}
