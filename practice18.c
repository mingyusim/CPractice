#include <stdio.h>

int main() {
  //1���� 10������ ��
  int num = 1;   //�ʱⰪ
  int sum = 0;
  int dan = 2;

  for(int b = 1; b<= 5; b++) {
    for(int a = 1; a <=9; a++) {
      // printf("���� �Է��ϼ��� : ");
      // scanf("%d", &dan);

    /* <<������ ���>>

    �� ����� �ʹ� �����ϴ�.
    home :
    if(num <= 10) {
      sum = sum + num;   //0+1+2+...+9+10
      num ++;   //������
      goto home;
    }

    ���� �� ������� �����Ѵ�. */
      for(num = 1; num <=9; num++) {
        /* ¦���� ���
        if(num % 2 == 0) {
          sum = sum + num;
        } */
          if(num % 2 == 0) {
            printf("%d*%d=%d\t", num, a, a * num);
          }
      }
      printf("\n");
    }
    printf("\n");
  }
  /*2���� �Ųٷ�
  for(num = 9; num >=1; num--) {
    printf("%d * %d = %d\n", dan, num, dan * num);
  } */

  /* <<�� ���>>
  do {
    sum = sum + num;
    num ++;
  } while(num <= 10); */

  // printf("%d������ �հ�� %d�Դϴ�.\n", num-1, sum);

  return 0;
}
