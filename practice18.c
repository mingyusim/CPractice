#include <stdio.h>

int main() {
  //1���� 10������ ��
  int num = 1;   //�ʱⰪ
  int sum = 0;

  /* <<������ ���>>

  �� ����� �ʹ� �����ϴ�.
  home :
  if(num <= 10) {
    sum = sum + num;   //0+1+2+...+9+10
    num ++;   //������
    goto home;
  }

  ���� �� ������� �����Ѵ�.
  for(num = 1; num <=10; num++) {
    sum = sum + num;
  } */

  do {
    sum = sum + num;
    num ++;
  } while(num <= 10);

  printf("%d������ �հ�� %d�Դϴ�.\n", num-1, sum);

  return 0;
}
