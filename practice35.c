#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* myresult(float a);

int main() {
  //�̸�, ����, ���� ������  �Է¹޾� �հ� & ���հ� ���
  char result[30];
  char name[20];
  char *presult = NULL;
  char grade;
  int kor, math;
  float avg;

  printf("�̸�, ��������, ���������� �Է��ϼ��� : ");
  scanf("%s %d %d", name, &kor, &math);

  avg = (kor + math) / 2.0;
  strcpy(result, myresult(avg));
  printf("%s��(��) \" %s \" �Դϴ�\n", name, result);

  return 0;
}

char* myresult(float a) {
  char result[10];

  if(a >= 90) strcpy(result, "�հ�");
  else strcpy(result, "���հ�");

  return result;
}
