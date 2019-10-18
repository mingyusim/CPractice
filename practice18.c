#include <stdio.h>

int main() {
  //1에서 10까지의 합
  int num = 1;   //초기값
  int sum = 0;
  int dan = 2;

  for(int b = 1; b<= 5; b++) {
    for(int a = 1; a <=9; a++) {
      // printf("단을 입력하세요 : ");
      // scanf("%d", &dan);

    /* <<교수님 방식>>

    이 방법은 너무 복잡하다.
    home :
    if(num <= 10) {
      sum = sum + num;   //0+1+2+...+9+10
      num ++;   //증가값
      goto home;
    }

    따라서 이 방식으로 진행한다. */
      for(num = 1; num <=9; num++) {
        /* 짝수만 출력
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
  /*2단을 거꾸로
  for(num = 9; num >=1; num--) {
    printf("%d * %d = %d\n", dan, num, dan * num);
  } */

  /* <<내 방식>>
  do {
    sum = sum + num;
    num ++;
  } while(num <= 10); */

  // printf("%d까지의 합계는 %d입니다.\n", num-1, sum);

  return 0;
}
